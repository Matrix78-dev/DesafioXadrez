#include <stdio.h>

int main () {
    int i = 1, option;
    int movimentoCavalo;

    do {
        printf ("Selecione uma opçao para movimentar uma peça de xadrez.\n");
        printf ("\n1. Torre move 5 casas para direita.\n");
        printf ("2. Bispo move 5 casa diagonal cima, direita.\n");
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
            for (i = 1; i <= 6; i++) {
                printf ("Direita\n");
            }
            printf ("Torre moveu 5 casas para Direita.\n");
            break;
        case 2:
            i = 1;
            printf(".:: Movimentação Bispo ::.\n");
            while (i <= 5)
            {
                printf ("Cima, direita.\n");
                i++;
            }
            printf ("Bispo moveu 5 casas na diagonal cima para direita.\n");
            break;
        case 3:
            i = 1;
            printf(".:: Movimentação Rainha ::.\n");
            do { 
                printf ("Esquerda.\n");
                i++;               
            } while (i <= 4);
            printf ("Rainha moveu 4 casas para esuqerda.\n");
            break;
        case 4:
            for (movimentoCavalo = 0; movimentoCavalo < 1; movimentoCavalo++)
            {
                for (int i = 0; i < 2; i++)
                {
                    printf ("Cima\n");
                }               
                printf ("Direita\n");
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