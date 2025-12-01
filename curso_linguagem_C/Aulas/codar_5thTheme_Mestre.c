#include <stdio.h>
#define rows 5
#define columns 5

int main (){

    int matrix[rows][columns];

    int target, found = 0, sum = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = sum;
            sum ++;
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    

    printf("Digite o alvo: ");
    scanf("%d", &target);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] == target)
            {
                printf("\nO valor %d encontrado no indice (%d, %d)\n\n", target, i, j);
                found = 1;
                break;
            }
            
        }
        if (found)
        {
            break;
        }
        
    }
    if (!found)
    {
        printf("\nElemento %d não foi encontrado na matriz!\n\n", target);
    }
    


    return 0;
}