#include <stdio.h>

int main () {
/*
    int signedNumber = 3000000000;
    unsigned int unsignedNumber = 3000000000;

    printf ("Número com sinal: %d\n", signedNumber);
    printf ("Número sem sinal: %u\n", unsignedNumber);

    int regularNumber = 2147483647;
    long int bigNumber = 2147483647;

    printf ("Número regular (int): %d\n", regularNumber);
    printf ("Número grande (long int): %ld\n", bigNumber);

    bigNumber = 2147483648;

    printf("Número grande atualizado (long int): %ld\n", bigNumber);


    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;

    printf ("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);

    unsigned long int largePositiveNumber = 4000000000;
    printf("Número positivo grande: %lu\n", largePositiveNumber);

    int numeroNormal = 2147483647;
    long int numeroGrande = 214748364777;

    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número grande (long int): %ld\n", numeroGrande);
*/

    short int numeroPequeno = 32767;
    printf("Número pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768;
    printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

    return 0;
}