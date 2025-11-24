#include <stdio.h>

int main (){

    /*
    int a = 10, b = -5;

    if (a > 0 || b > 0)
    {
        printf("Pelo menos um dos números é positivo.\n");
    } else {
        printf("Os dois números são negativos.\n");
    }
    */

    /*
    int a = 10;

    if(!a) {

        printf("A variável a é zero.\n");
    } else {

        printf("A variável é diferente de zero.\n");
    }
    */

    /*
    int a = 10;

    if (!(a > 0)) {
        printf("A variável é negativa.\n");
    } else {
        printf("A variável é positiva.\n");
    }
    */

    int a = 5, b = -10, c = 1;

    if (a > 0 && b < 0 || c == 0) {
        printf("A condição é verdadeira\n");
    } else {
        printf("A condição é falsa\n");
    }

    return 0;
}