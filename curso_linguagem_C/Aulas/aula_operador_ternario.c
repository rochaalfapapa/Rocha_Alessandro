#include <stdio.h>

int main () {

    int age = 16;
    int result;

    /*
    age >= 18 ? printf("Você é maior de idade!\n") : printf("Você é menor de idade!\n");
    */

    /*
    result = age >= 18 ? 1 : 0;

    if (result == 1)
    {
        printf("Você é maior de idade!\n");
    } else {
        printf("Você é menor de idade!\n");
    }
    */

    /*
    int temp = 31;
    //int result;
    
    temp > 30 ? printf("Está calor!\n") : printf("Está frio!\n");
    */

    int num1 = 40, num2 = 20;
    int bigger;

    (num1 > num2) ? (bigger = num1) : (bigger = num2);

    printf("O número maior é %d\n\n", bigger);

    return 0;
}