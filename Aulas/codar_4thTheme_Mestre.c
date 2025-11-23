#include <stdio.h>

void recursivo (int number){

    if (number > 0)
    {
        printf("%d \n", number);
        recursivo (number - 1);
    }
    
}

int main (){

    int quantity = 10;

    printf("Countdown...\n");
    recursivo(quantity);

    return 0;
}