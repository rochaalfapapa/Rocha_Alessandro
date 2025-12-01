#include <stdio.h>


//Função para receber os dados, validar e posicionar o navio na horizontal e vertical
int shipPlacement(int board[10][10], int shipID){


    int iS, jS, shipLenght;
    char direction;
    int isPlacementValid;
    int shipValue = 3 + shipID;

    do
    {
        printf("\nIndique a coordenada (linha) inicial do navio %d: ", shipID);
        scanf("%d", &iS);
        printf("\nIndique a coordenada (coluna) inicial do navio %d: ", shipID);
        scanf("%d", &jS);
        if (iS < 0 || iS > 9 || jS < 0 || jS > 9)
        {
            isPlacementValid = 0;
            printf("\nERRO: Coordenadas iniciais devem estar entre 0 e 9!!!\n\n");
            continue;
        }
        printf("\nIndique o tamanho do navio: ");
        scanf("%d", &shipLenght);
        printf("\nIndique a direção do posicionamento");
        printf("\n\nLegenda:\nh - horizontal\nv - vertical\na - diagonal primária descendente\n\t");
        scanf(" %c", &direction);

        isPlacementValid = 0;

        if ((direction == 'h' || direction == 'H') && (jS + shipLenght <= 10))
        {
            isPlacementValid = 1;
            for (int j = jS; j < (jS + shipLenght); j++)
            {
                if (board[iS][j] != 0)
                {
                    isPlacementValid = 0;
                    break;
                }
                
            }
            
        } else if ((direction == 'v' || direction == 'V') && (iS + shipLenght <= 10))
        {
            isPlacementValid = 1;
            for (int i = iS; i < (iS + shipLenght); i++)
            {
                if (board[i][jS] != 0)
                {
                    isPlacementValid = 0;
                    break;
                }
                
            }
            
        } else if ((direction == 'a' || direction == 'A') && (iS + shipLenght <= 10) && (jS + shipLenght <= 10))
        {
            isPlacementValid = 1;
            for (int k = 0; k < shipLenght; k++)
            {
                if (board[iS + k][jS + k] != 0)
                {
                    isPlacementValid = 0;
                    break;
                }
                
            }
            
        }
        

        if (isPlacementValid == 0)
        {
            printf("\nERRO: Posicionamento inválido (limite, colisão ou direção). \n\n");
        }
    
    } while (isPlacementValid == 0);
    
    //Caso a posição foi validado com sucesso, será posicionado o navio na matriz
    if (direction == 'h' || direction == 'H')
    {
        for (int j = jS; j < (jS + shipLenght); j++)
        {
            board[iS][j] = shipValue;
        }
        
    } else if (direction == 'v' || direction == 'V')
    {
        for (int i = iS; i < (iS + shipLenght); i++)
        {
            board[i][jS] = shipValue;
        }
        
    } else if (direction == 'a' || direction == 'A')
    {
        for (int k = 0; k < shipLenght; k++)
        {
            board[iS + k][jS + k] = shipValue;
        }
        
    }
    
        
    return 1;
}

//Função para indicar local das habilidades

int skillPlacement(int boardSkills[10][10], int skillID) {

    int iSkill, jSkill, isPlacementValid = 0;
    int iSkill2, jSkill2;

    //Posicionando o cone
    do
    {
        printf("\n\nIndique a coordenada (linha) inicial da habilidade do cone: ");
        scanf("%d", &iSkill);
        printf("\n\nIndique a coordenada (Coluna) inicial da habilidade do cone: ");
        scanf("%d", &jSkill);
        if (iSkill < 0 || iSkill > 9 || jSkill < 0 || jSkill > 9)
        {
            isPlacementValid = 0;
            printf("\nERRO: Coordenadas iniciais devem estar entre 0 e 9!!!\n\n");
            continue;
        } else {
            isPlacementValid = 1;
        }
        
    } while (isPlacementValid == 0);
    
    //Caso o posicionamento seja validado com sucesso, a habilidade será posicionada
   
    for (int k = 0; k < 3; k++)
    {
        int i = iSkill + k;
        int value = k + 1;
        int offset = k;

        if (i < 0 || i >= 10)
        {
            break;
        }
        for (int j = jSkill - offset; j <= jSkill + offset; j++)
        {
            if (j >= 0 && j < 10)
            {
                boardSkills[i][j] = 2;
            }
            
        }
        
    }
    
    //Posicionando a cruz
    
    do
    {
        printf("\n\nIndique a coordenada (linha) inicial da habilidade da cruz: ");
        scanf("%d", &iSkill2);
        printf("\n\nIndique a coordenada (Coluna) inicial da habilidade da cruz: ");
        scanf("%d", &jSkill2);
        if (iSkill2 < 0 || iSkill2 > 9 || jSkill2 < 0 || jSkill2 > 9)
        {
            isPlacementValid = 0;
            printf("\nERRO: Coordenadas iniciais devem estar entre 0 e 9!!!\n\n");
            continue;
        } else {
            isPlacementValid = 1;
        }
        
    } while (isPlacementValid == 0);

    //Caso o posicionamento seja validado com sucesso, a habilidade será posicionada
    int j_right = (jSkill2 + 2);
    int j_left = (jSkill2 - 2);
    int i_up = (iSkill2 + 1);
    int i_down = (iSkill2 - 1);

    for (int j = j_left; j < j_right; j++)
    {
        boardSkills[iSkill2][j] = 2;
    }
    for (int i = i_up; i > i_down; i--)
    {
        boardSkills[i][jSkill2] = 2;
    }
      


    return 1;
}

//Função principal do programa
int main (){

    //Declaração das variáveis
    int board[10][10];
    int boardSkills[10][10];
    int ship1[3] = {3,3,3}, ship2[3] = {3,3,3};
    int iS1,jS1, shipLength1, control;
    int iS2,jS2, shipLength2;
    char direction1, direction2, direction3;
    int isPlacementValid;
    int iS3, jS3, shipLenght3;
    int iS4, jS4, shipLenght4;

    //Inicialização da matriz com 0 em todas posições (representando água)
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            board[i][j] = 0;
        }
        
    }
    
    //Exibição da matriz iniciada apenas com 0
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", board[i][j]);
        }
        printf("\n");
    }

    /*

    //Registrando o Navio 1
    shipPlacement(board, 1);
    
    //Registrando o Navio 2
    shipPlacement(board, 2);

    //Exibindo a matriz atualizada com os dois navios
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", board[i][j]);
        }
        printf("\n");
    }

    // Registrando o navio 3
    shipPlacement(board, 3);

    //Exibindo a matriz atualizada com os três navios
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", board[i][j]);
        }
        printf("\n");
    }
    
    // Registrando o navio 4
    shipPlacement(board, 4);

    //Exibindo a matriz atualizada com os quatros navios
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", board[i][j]);
        }
        printf("\n");
    }

    */

    printf("\n\n\nVamos agora visualizar o tabuleiro 'limpo' antes de aplicadas as habilidades:\n\n");
   
    //Inicializando a matriz de habilidades com valores 0
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            boardSkills[i][j] = 0;
        }
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", boardSkills[i][j]);
        }
        printf("\n");
    }

    //Registrando a primeira habilidade
    skillPlacement(boardSkills, 1);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", boardSkills[i][j]);
        }
        printf("\n");
    }

    return 0;
}