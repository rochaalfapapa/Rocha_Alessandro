#include <stdio.h>

int main () {

    int option;
    float grade1, grade2, average;

    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opação: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Calcular a média\n");
        printf("Digite a primeira nota: ");
        scanf("%f", &grade1);
        printf("Digite a segunda nota: ");
        scanf("%f", &grade2);
        //testing condition if grade >= 0 and <= 10
        if ((grade1 >= 0 && grade1 <= 10) && (grade2 >= 0 && grade2 <= 10))
        {
            average = (grade1 + grade2) / 2;
            printf("A média é %.2f\n\n", average);
        } else {
            printf("Entrada com valores errados de notas!\n");
        }
        

        break;
    case 2:
        printf("Determinar Status\n");
        printf("Entrat com a média: ");
        scanf("%f", &average);

        //average >= 6 ? printf("Aprovado!\n") : printf("Reprovado!\n");

        if (average >= 7)
        {
            printf("Aprovado!\n");
        } else if (average >= 5){
            printf("Recuperação!\n");
        } else {
            printf("Reprovado!\n");
        }
        

        break;
    case 3:
        printf("Saindo do programa...\n");
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}