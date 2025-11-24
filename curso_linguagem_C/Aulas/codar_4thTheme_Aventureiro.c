#include <stdio.h>

int main () {

    int i, j;
    char letter;


    for (i = 1; i <= 100; i++)
    {
        letter = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }
    

    return 0;
}