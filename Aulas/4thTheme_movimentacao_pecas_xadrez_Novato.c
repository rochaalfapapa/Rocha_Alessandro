#include <stdio.h>

int main () {

    /*De acordo com a instrução do exercício:
    Torre movimenta 5 casas para direita
    Bispo movimenta 5 casas na diagonal para cima e à direita
    Rainha movimenta 8 casas para esquerda
    */
    
    
    //Declaração de variável
    int stepsRook, stepsBishop, stepsQueen, option, controlRook, controlBishop;

    printf("\n###### Bem vindo ao jogo de Xadrez ######\n");

    //Estrutura principal com menu interativo
    do
    {
        printf("\nSelecione qual peça deseja movimentar:\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf(" %d", &option);


        //switch para determinar qual peça mover, ou indicar o fim do programa
        switch (option)
        {
        case 1:
            printf("Você indicou que deseja movimentar a Torre.\n\n");
            printf("Informe o número de casas que serão movimentadas: ");
            scanf("%d", &stepsRook);
            printf("\nA torre realizará o seguinte movimento:\n");

            controlRook = 0;

            //Estrutura Do While caso a Torre seja indicada para movimentar
            do
            {
                printf("Direita\n");
                controlRook ++;
            } while (controlRook < stepsRook);
            break;
        case 2:
            printf("Você indicou que deseja movimentar o Bispo.\n\n");
            printf("Informe o número de casas que serão movimentadas: ");
            scanf("%d", &stepsBishop);
            printf("\nO Bispo realizará o seguinte movimento:\n");
            
            controlBishop = 0;

            //Estrutura While caso o Bispo seja indicado para movimentar
            while (controlBishop < stepsBishop)
            {
                printf("Cima, direita\n");
                controlBishop ++;
            }
            break;
        case 3:
            printf("Você indicou que deseja movimentar a Rainha.\n\n");
            printf("Informe o número de casas que serão movimentadas: ");
            scanf("%d", &stepsQueen);
            printf("\nA Rainha realizará o seguinte movimento:\n");

            //Estrutura For caso a Rainha seja indicada para movimentar
            for (int i = 0; i < stepsQueen; i++)
            {
                printf("Esquerda\n");
            }         
            break;
        case 4:
            printf("Saindo do programa...\n\n");
            break;
        
        default:
            printf("Opção inválida!\n\n");
            break;
        }
    } while (option != 4);
    
    return 0;
}