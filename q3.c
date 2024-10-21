#include <stdio.h>

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Antes da troca: A = %d, B = %d\n", A, B);

    trocar(&A, &B);

    printf("Depois da troca: A = %d, B = %d\n", A, B);

    return 0;
}
