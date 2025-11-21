#include <stdio.h>

int main() {
    
    /*int i = 1;

    do {
        printf("Valor de a: %d\n", i);
        i++;
    } while (i == 5);
    */

    int option;

    do
    {
        printf("Menu:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nVocê escolheu a opção 1.\n");
            break;
        case 2:
            printf("\nVocê escolheu a opção 2.\n");
            break;
        case 3:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpção inválida!\n");
            break;
        }
    } while (option != 3);
    

    return 0;
}