#include <stdio.h>

int main () {

    int stepsKnight1, stepsKnight2;
    char directionKnight;


    printf("Você indicou que o primeiro movimento será para Cima!\n");
    printf("Indique a quantidades de casas que serão movimentadas inicialmente para Cima (1 ou 2 casas): ");
    scanf("%d", &stepsKnight1);
    printf("Indique qual a segunda direção do movimento (d ou e): ");
    scanf(" %c", &directionKnight);
                    
    (stepsKnight1 == 1) ? (stepsKnight2 = 2) : (stepsKnight2 = 1);

    printf("\nsteps 1: %d\n", stepsKnight1);
    printf("\nsteps 2: %d\n", stepsKnight2);

    return 0;
}
/*
    
     for (int i = 1; i <= stepsKnight1; i++)
                    {
                        do
                        {
                            if (directionKnight == 'd')
                            {
                                printf("Direita\n");
                                j++;
                            } else
                            {
                                printf("Esquerda\n");
                                j++;
                            }
                            
                            
                        } while (j <= stepsKnight2);
                        
                        printf("Cima\n");

                    }

    return 0;
}
*/