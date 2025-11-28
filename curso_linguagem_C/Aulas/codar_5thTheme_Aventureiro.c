#include <stdio.h>
#define rows 10
#define columns 10

int main() {

    int matrix [rows][columns], sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum ++;
            matrix[i][j] = sum;
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n%d\n\n", sum);

    return 0;
}