#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int playerChoice, computerChoice;
    srand (time(0));

    printf("*** Jodo de Jokenpô ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Entre com sua escolha: ");
    scanf("%d", &playerChoice);

    computerChoice = rand() % 3 + 1;

    switch (playerChoice)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    
    default:
        printf("Opção inválida!\n\n");
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Jogador: Papel\n");
        break;
    case 3:
        printf("Jogador: Tesoura\n");
        break;
    }

    if (computerChoice == playerChoice)
    {
        printf("### Jogo empatou! ###\n\n");
    } else if ((playerChoice == 1) && (computerChoice == 3) || (playerChoice == 2) && (computerChoice == 1) || (playerChoice == 3) && (computerChoice == 2))
    {
        printf("### Parabéns, você ganhou!\n\n");
    } else {
        printf("### Você perdeu ###");
    }
    
    

    return 0;
}