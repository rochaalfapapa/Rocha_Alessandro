#include <stdio.h>

int main() {

    /*
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 12 && idade >= 0) {
        printf("Você é uma criança. \n");
    } else if (idade >= 12 && idade < 18) {
            printf("Você é um adolescente. \n");
        } else if (idade >= 18 && idade < 60) {
            printf("Você é um adulto. \n");
        } else {
            printf("Você é um idoso. \n");
        }
    
    */
    
    int nota;

    printf("Digite sua nota (0 a 100): ");
    scanf("%d", &nota);

    if (nota >= 90){
        printf("Conceito A!\n");
    } else if (nota >= 80){
        printf("Conceito é B!\n");
    } else if (nota >= 70){
        printf("Conceito é C!\n");
    } else if (nota >= 60){
        printf("Conceito é D!\n");
    } else if (nota >= 50){
        printf("Conceito é E!\n");
    } else {
        printf("Conceito é F!\n");
    }

    return 0;
}