#include <stdio.h>

//Aplicação recursivo de decisão para movimento da torre.
void recursivoTorre (int numero1)
{
    if (numero1 > 0) {
        printf ("Direita \n");
        recursivoTorre (numero1 - 1); 
    }
}

void recursivoRainha (int numero2)
{
    if (numero2 > 0) {
        printf ("Esquerda\n");
        recursivoRainha (numero2 - 1);
    }
}
void recursivoBispo(int linha, int coluna) {

    if (linha < 0 || coluna > 5) {
        return;
    }

    printf("Cima\n");
    printf("Direita\n");

    recursivoBispo(linha - 1, coluna + 1);
}


int main () {
    int i = 1, option;
    int movimentoCavalo, contagemTorre = 5;

    do {
        printf ("Selecione uma opçao para movimentar uma peça de xadrez.\n");
        printf ("\n1. Torre move 5 casas para direita.\n");
        printf ("2. Bispo move 6 casas na diagonal para cima e direita.\n");
        printf ("3. Rainha move 4 casas para esquerda.\n");
        printf ("4. Cavalo move duas casas para cima e uma para direita.\n");
        printf ("5. Sair.\n");
        printf ("\n");
        printf ("Digite uma opção: ");
        scanf ("%d", &option);

        printf ("\n");

    
        switch (option)
        {
        case 1:
            printf(".:: Movimentação Torre ::.\n");
            recursivoTorre (contagemTorre);
            printf ("\n");
            printf ("Torre moveu 5 casas para Direita.\n");
            break;
        case 2:
            printf(".:: Movimentação Bispo ::.\n");
            recursivoBispo(4, 3);
            printf ("\n");
            printf ("O bispo moveu 6 casas na diagonal para cima e para direita.\n");
            break;
        case 3:
            printf(".:: Movimentação Rainha ::.\n");
            int contagemRainha = 4;
            recursivoRainha (contagemRainha);
            printf ("\n");
            printf ("Rainha moveu 4 casas para esuqerda.\n");
            break;
        case 4:
            // movimentação do cavalo com loop for +continue; +break;
            for (int i = 0; i < 3; i++) {

                if (i == 3) {
                break; 
                }

                if (i < 2) {
                printf("Cima\n");
                continue; 
                }

                if (i == 2) {
                printf("Direita\n");
                }
            }
            printf ("O cavalo moveu duas casas para cima e uma para a direita.\n");            
            break;
        case 5:
            printf ("Saindo do jogo...");
            break;
        default:
            printf ("Opção inválida, tente novamente.\n");
            break;
        }
        printf("\n");
    } while (option != 5);

    return 0;
}







/*

            for (i = 1; i <= 6; i++) {
                printf ("Direita\n");
            }
            

i = 1;
            
            do { 
                printf ("Esquerda.\n");
                i++;               
            } while (i <= 4);
            
for (movimentoCavalo = 0; movimentoCavalo < 1; movimentoCavalo++)
            {
                for (int i = 0; i < 2; i++)
                {
                    printf ("Cima\n");
                }               
                printf ("Direita\n");
  
                }
i = 1;
            
            while (i <= 5)
            {
                printf ("Cima, direita.\n");
                i++;
            }
*/