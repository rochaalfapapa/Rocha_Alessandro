#include <stdio.h>

int main (){

    float temp, umidade;
    unsigned int estoque, estoqueMinimo;
    estoqueMinimo = 1000;
    
    printf("Entre com a temperatura: \n");
    scanf("%f", &temp);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if(temp > 30.0){

        printf("\nA temperatura está alta\n\n");
    } else {

        printf("\nA temperatura está dentro dos parâmetros.\n\n");
    }

    if(umidade>50){
        printf("A umidade está elevada.\n\n");
    } else {
        printf("A umidade está dentro dos parâmetros.\n\n");
    }

    if(estoque<estoqueMinimo){
        printf("Estoque está abaixo do mínimo.\n\n");
    } else {
        printf("Estoque normal\n\n");
    }

    return 0;

}