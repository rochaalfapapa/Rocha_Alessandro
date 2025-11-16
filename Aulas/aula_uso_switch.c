#include <stdio.h>

int main (){

    /*
    int variavel;

    printf("Digite um valor\n");
    scanf("%d", &variavel);

    switch (variavel){
        case 1:
            printf("Código a ser executado se variável == 1\n");
        break;
        case 2:
            printf("Código a ser executado se variável == 2\n");
        break;
        default:
            printf("Código a ser executado se executado se variável não for 1 ou 2\n");
    }

    */

    /*
    int option;
    float balance = 1000.00;

    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("O seu saldo é: RS %.2f\n", balance);
        break;
    case 2:
        printf("Digite o banco que você deseja depositar:\n");
        printf("Digite a agência que você deseja depositar:\n");
        printf("Digite a conta que você deseja depositar:\n\n");
        break;
    case 3:
        printf("Digite o valor a sacar:\n\n");
        break;
    default:
        printf("Opção inválida!\n\n");
        break;
    }
    */

    /*
    int day;

    printf("Digite o valor do dia:\n");
    scanf("%d", &day);

    if (day == 1){
        printf("Domingo\n");
    } else if (day == 2){
        printf("Segunda-feira\n");
    } else if (day == 3){
        printf("Terça-feira\n");
    } else if (day == 4){
        printf("Quarta-feira\n");
    } else if (day == 5){
        printf("Quinta-feira\n");
    } else if (day == 6) {
        printf("Sexta-feira\n");
    } else {
        printf("Sábado\n\n");
    }

    */

    int day;

    printf("Entre o valor do dia! (Entre 1 e 7)\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Domingo\n\n");
        break;
    case 2:
        printf("Segunda-feira\n\n");
        break;
    case 3:
        printf("Terça-feira\n\n");
        break;
    case 4:
        printf("Quarta-feira\n\n");
        break;
    case 5:
        printf("Quinta-feira\n\n");
        break;
    case 6:
        printf("Sexta-feira\n\n");
        break;
    case 7:
        printf("Sábado\n\n");
        break;
    default:
        printf("Entrada inválida!\n\n");
        break;
    }

    return 0;
}