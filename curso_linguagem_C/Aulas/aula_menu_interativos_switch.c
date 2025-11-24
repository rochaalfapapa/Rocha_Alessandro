#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int option;
    int secretNumber, guess, rules;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        srand(time(0));
        secretNumber = rand() % 10;
        printf("Digite um número de 0 a 9: \n");
        scanf("%d", &guess);

        if (secretNumber == guess)
        {
            printf("Você acertou!\n\n");
            printf("Número secreto: %d\n", secretNumber);
        } else {
            printf("Você errou!\n\n");
            printf("Número secreto: %d\n", secretNumber);
        }
        break;
    case 2:
        printf("As regras são...\n");
        printf("Digite a opção relacionada as regras do jogo\n");
        scanf("%d", &rules);
        switch (rules)
        {
        case 1:
            printf("Regra 1\n");
            break;
        case 2:
            printf("Regra 2\n");
            break;
        case 3:
            printf("Regra 3\n");
            break;
        
        default:
            break;
        }

        break;
    case 3:
        printf("Saindo do jogo...\n");
        break;
    
    default:
        printf("Opção inválida!\n\n");
        break;
    }

    return 0;
}