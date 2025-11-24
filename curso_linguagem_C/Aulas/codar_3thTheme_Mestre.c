#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {

    int playerNumber, computerNumber, result;
    char comparisonType;

    // Random number generate
    srand(time(0));
    computerNumber = rand() % 100 + 1;

    printf("##############################################\n");
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação:");
    scanf(" %c", &comparisonType);

    printf("\nDigite seu número (entre 1 e 100): ");
    scanf("%d", &playerNumber);

    
    switch (comparisonType)
    {
    case 'M':
    case 'm':
    printf("Você escolheu a opção maior!\n");
        result = playerNumber > computerNumber ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor!\n");
        result = playerNumber < computerNumber ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção igual!\n");
        result = playerNumber == computerNumber ? 1 : 0;
        break;
    
    default:
        printf("Tipo de comparação inválida!\n");
        break;
    }

    printf("O número do computador é %d, e o do jogador é %d.\n\n", computerNumber, playerNumber);

    if (result == 1){
        printf ("Parabéns, você venceu!\n\n");
    } else {
        printf("Infelizmente você perdeu.\n\n");
    }

    return 0;
}