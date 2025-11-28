#include <stdio.h>

int main (){

    /*
    int matriz1[2][2] = {{1,2},{3,4}}, matriz2[2][2] = {{5,6},{7,8}}, matrizSoma[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d\t", matrizSoma[i][j]);
        }
        printf("\n");
    }
    */

    int vector[5] = {1,2,3,4,5}, sum = 0;
    
    for (int i = 0; i < 5; i++)
    {
        sum += vector[i];
    }
    
    printf("A soma dos elementos do vetor é: %d\n\n", sum);

    return 0;
}