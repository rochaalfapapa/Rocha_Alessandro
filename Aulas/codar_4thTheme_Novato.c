#include <stdio.h>

int main () {

    /*
    int i = 0;

    while (i <= 10)
    {
        if (i % 2 != 0)
        {
            printf("O número %d é ímpar!\n", i);
        }
        i++;
    }
    */
    
    /*
    int number;

    do
    {
        printf("Digite um número par para sair do programa...\n");
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            printf("%d é par!\n", number);
        } else
        {
            printf("%d é ímpar!\n", number);
        }
        
        
    } while (number % 2 != 0);

    printf("Você digitou um número par, saindo do programa...\n\n");
    */
 
    int number, i;

    printf("Digite um número para calcularmos a tabuada: ");
    scanf("%d", &number);

    for (i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, number, i * number);
    }
    

    return 0;
}