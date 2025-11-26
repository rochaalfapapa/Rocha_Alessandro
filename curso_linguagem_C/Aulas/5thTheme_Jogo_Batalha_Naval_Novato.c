#include <stdio.h>

int main (){

    int board[10][10];
    int ship1[3] = {3,3,3}, ship2[3] = {3,3,3};
    int iS1,jS1, shipLength1, control;
    int iS2,jS2, shipLength2;
    char direction1, direction2;
    int isPlacementValid;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            board[i][j] = 0;
        }
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", board[i][j]);
        }
        printf("\n");
    }
    

    //Navio 1
    do
    {
        printf("\nIndique a coordenada (linha) inicial do navio 1: ");
        scanf("%d", &iS1);
        printf("\nIndique a coordenada (coluna) inicial do navio 1: ");
        scanf("%d", &jS1);
        printf("\nIndique o tamanho do navio: ");
        scanf("%d", &shipLength1);
        printf("\nIndique a direção do posicionamento (h ou v): ");
        scanf(" %c", &direction1);

        if ((iS1+shipLength1) > 10)
        {
            control = 1;
        } else if ((jS1+shipLength1) > 10)
        {
            control = 1;
        } else {
            control = 0;
        }
        
        if (direction1 == 'h' || direction1 == 'H')
        {
            for (int j = jS1; j < (jS1+shipLength1); j++)
            {
                if (board[iS1][j] != 0)
                {
                    isPlacementValid = 0;
                    break;
                } else {
                    isPlacementValid = 1;
                }
                
            }
        } else if (direction1 == 'v' || direction1 == 'V')
        {
            for (int i = iS1; i < (iS1+shipLength1); i++)
            {
                if (board[i][jS1] != 0)
                {
                    isPlacementValid = 0;
                    break;
                } else {
                    isPlacementValid = 1;
                }
                
            }
        
        }
        if (!isPlacementValid)
        {
            printf("\nO navio está sobrepondo outro navio!\n\n");
            control = 1;
        }
        

    } while (control);
    


    if (direction1 == 'h' || direction1 == 'H')
    {
        for (int j = jS1; j < (jS1+shipLength1); j++)
        {
            board[iS1][j] = 3;
        }
    } else if (direction1 == 'v' || direction1 == 'V')
    {
        for (int i = iS1; i < (iS1+shipLength1); i++)
        {
            board[i][jS1] = 3;
        }
        
    }
    

    //Navio 2
    do
    {
        printf("\nIndique a coordenada (linha) inicial do navio 2: ");
        scanf("%d", &iS2);
        printf("\nIndique a coordenada (coluna) inicial do navio 2: ");
        scanf("%d", &jS2);
        printf("\nIndique o tamanho do navio: ");
        scanf("%d", &shipLength2);
        printf("\nIndique a direção do posicionamento (h ou v): ");
        scanf(" %c", &direction2);

        if ((iS2+shipLength2) > 10)
        {
            control = 1;
        } else if ((jS2+shipLength2) > 10)
        {
            control = 1;
        } else {
            control = 0;
        }


        if (direction2 == 'h' || direction2 == 'H')
        {
            for (int j = jS2; j < (jS2+shipLength2); j++)
            {
                if (board[iS2][j] != 0)
                {
                    isPlacementValid = 0;
                    break;
                } else {
                    isPlacementValid = 1;
                }
                
            }
        } else if (direction2 == 'v' || direction2 == 'V')
        {
            for (int i = iS2; i < (iS2+shipLength2); i++)
            {
                if (board[i][jS2] != 0)
                {
                    isPlacementValid = 0;
                    break;
                } else {
                    isPlacementValid = 1;
                }
                
            }
        
        }
        if (!isPlacementValid)
        {
            printf("\nO navio está sobrepondo outro navio!\n\n");
            control = 1;
        }
        

    } while (control);
    
    
    if (direction2 == 'h' || direction2 == 'H')
    {
        for (int j = jS2; j < (jS2+shipLength2); j++)
        {
            board[iS2][j] = 7;
        }
    } else if (direction2 == 'v' || direction2 == 'V')
    {
        for (int i = iS2; i < (iS2+shipLength2); i++)
        {
            board[i][jS2] = 7;
        }
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}