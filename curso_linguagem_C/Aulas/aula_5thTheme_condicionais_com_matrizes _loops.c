#include <stdio.h>

int main (){

    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int target, found = 0;

    printf("Digite o elemento a ser procurado: ");
    scanf("%d", &target);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == target)
            {
                printf("\nElemento %d encontrado na posição (%d, %d)\n\n", target, i, j);
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
        printf("Elemento %d não encontrado na matriz\n", target);
    }
    
    

    return 0;
}