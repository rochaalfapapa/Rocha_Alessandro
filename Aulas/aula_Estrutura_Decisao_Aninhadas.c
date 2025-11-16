# include <stdio.h>

int main (){

    /*
    int idade;
    float renda;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: \n");
    scanf("%f", &renda);

    if (idade <= 18 || idade >=60){
        if (renda < 2000){
            printf("Você tem direito ao desconto!\n");
        } else {
            printf("Você não tem direito ao desconto devido à renda!\n");
        }
    } else {
        printf("Você não atende os critérios devido à idade.\n");
    }

    */

    /*
    int idade, dependentes;
    float renda;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite a sua renda mendsal: \n");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: \n");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade < 65){
        //condição verdadeira
        if (renda < 3000){
            if (dependentes > 2){
                printf("Você atende à todos os critérios!\n");
            } else {
                printf("Você não atende ao critério de dependentes!\n");
            }
        } else {
            printf("Você não atende ao critério renda!\n");
        }
    } else {
        printf("Você não atende ao critério idade!\n");
    }

    */

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num > 0){
        printf("Número positivo\n");
        if (num %2 == 0){
            printf("Número par\n");
        } else {
            printf("Número ímpar\n");
        }
    } else  if (num == 0) {
        printf("Número é zero\n");
    } else{
            printf("Número é negativo\n");
        }

    return 0;
}