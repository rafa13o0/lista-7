#include <stdio.h>

int main() {    
    int inteiro = 10;
    float real = 20.5;
    char caractere = 'A';
 
    int *pInteiro = &inteiro;
    float *pReal = R
    char *pCaractere = &caractere;

	printf("Antes da modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    *pInteiro = 30;
    *pReal = 40.5;
    *pCaractere = 'B';

    printf("Após a modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
