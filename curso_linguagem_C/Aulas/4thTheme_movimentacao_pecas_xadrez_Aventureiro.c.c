#include <stdio.h>

int main () {

    /*De acordo com a instrução do exercício:
    Torre movimenta 5 casas para direita
    Bispo movimenta 5 casas na diagonal para cima e à direita
    Rainha movimenta 8 casas para esquerda
    Cavalo movimenta duas para baixo e uma pra esquerda
    */
    
    
    //Declaração de variável
    int stepsRook, stepsBishop, stepsQueen, option, controlRook, controlBishop, optionKnight, stepsKnight1, stepsKnight2, j;
    char directionKnight;

    printf("\n###### Bem vindo ao jogo de Xadrez ######\n");

    //Estrutura principal com menu interativo
    do
    {
        printf("\nSelecione qual peça deseja movimentar:\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair do programa\n");
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
            printf("\nVocê indicou que deseja movimentar o Cavalo.\n\n");
            
            do
            {
                printf("Selecione a direção inicial do movimento do Cavalo:\n");
                printf("1. Cima\n");
                printf("2. Baixo\n");
                printf("3. Direita\n");
                printf("4. Esquerda\n");
                printf("5. Cancelar movimentação do cavalo\n");
                printf("Sua escolha será: ");
                scanf("%d", &optionKnight);

                switch (optionKnight)
                {
                case 1:
                    printf("Você indicou que o primeiro movimento será para Cima!\n");
                    printf("Indique a quantidades de casas que serão movimentadas para Cima (1 ou 2 casas): ");
                    scanf("%d", &stepsKnight1);
                    printf("Indique qual a outra direção do movimento (d ou e): ");
                    scanf(" %c", &directionKnight);
                                        
                    stepsKnight2 = (stepsKnight1 == 1) ? 2 : 1;
                                        
                    for (int i = 1; i <= stepsKnight1; i++)
                    {
                        j = 1;

                        while (j <= stepsKnight2)
                        {
                            if (directionKnight == 'd')
                            {
                                printf("Direita\n");
                            } else if (directionKnight == 'e')
                            {
                                printf("Esquerda\n");
                            }
                            j++;
                            
                        }
                        
                        printf("Cima\n");

                    }
                    

                    break;
                case 2:
                    printf("Você indicou que o primeiro movimento será para Baixo!\n");
                    printf("Indique a quantidades de casas que serão movimentadas para Baixo (1 ou 2 casas): ");
                    scanf("%d", &stepsKnight1);
                    printf("Indique qual a outra direção do movimento (d ou e): ");
                    scanf(" %c", &directionKnight);
                                        
                    stepsKnight2 = (stepsKnight1 == 1) ? 2 : 1;
                                        
                    for (int i = 1; i <= stepsKnight1; i++)
                    {
                        j = 1;

                        while (j <= stepsKnight2)
                        {
                            if (directionKnight == 'd')
                            {
                                printf("Direita\n");
                            } else if (directionKnight == 'e')
                            {
                                printf("Esquerda\n");
                            }
                            j++;
                            
                        }
                        
                        printf("Baixo\n");

                    }
                    
                    break;
                case 3:
                    printf("Você indicou que o primeiro movimento será para Direita!\n");
                    printf("Indique a quantidades de casas que serão movimentadas para Direita (1 ou 2 casas): ");
                    scanf("%d", &stepsKnight1);
                    printf("Indique qual a outra direção do movimento (c ou b): ");
                    scanf(" %c", &directionKnight);
                                        
                    stepsKnight2 = (stepsKnight1 == 1) ? 2 : 1;
                                        
                    for (int i = 1; i <= stepsKnight1; i++)
                    {
                        j = 1;

                        while (j <= stepsKnight2)
                        {
                            if (directionKnight == 'c')
                            {
                                printf("Cima\n");
                            } else if (directionKnight == 'b')
                            {
                                printf("Baixo\n");
                            }
                            j++;
                            
                        }
                        
                        printf("Direita\n");

                    }
                    
                    break;
                case 4:
                    printf("Você indicou que o primeiro movimento será para Esquerda!\n");
                    printf("Indique a quantidades de casas que serão movimentadas para Esquerda (1 ou 2 casas): ");
                    scanf("%d", &stepsKnight1);
                    printf("Indique qual a outra direção do movimento (c ou b): ");
                    scanf(" %c", &directionKnight);
                                        
                    stepsKnight2 = (stepsKnight1 == 1) ? 2 : 1;
                                        
                    for (int i = 1; i <= stepsKnight1; i++)
                    {
                        j = 1;

                        while (j <= stepsKnight2)
                        {
                            if (directionKnight == 'c')
                            {
                                printf("Cima\n");
                            } else if (directionKnight == 'b')
                            {
                                printf("Baixo\n");
                            }
                            j++;
                            
                        }
                        
                        printf("Esquerda\n");

                    }
                    
                    break;
                case 5:
                    printf("Cancelando movimentação do Cavalo...\n\n");
                
                default:
                    printf("Opção inválida!\n");
                    break;
                }
            } while (optionKnight != 5);
            
                     
            break;
        case 5:
            printf("Saindo do programa...\n\n");
            break;
        
        default:
            printf("Opção inválida!\n\n");
            break;
        }
    } while (option != 5);
    
    return 0;
}