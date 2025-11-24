#include <stdio.h>

int main (){

    char *names[] = {"Alice", "Bob", "Carol"};

    for (int i = 0; i < 3; i++)
    {
        printf("%s\t", names[i]);
    }
    printf("\n\n");

    return 0;
}