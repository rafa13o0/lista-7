#include <stdio.h>

int main() {
    int var1, var2;
    int *ptr1 = &var1;
    int *ptr2 = &var2;

    if (ptr1 > ptr2) {
        printf("O maior endereco e: %p\n", (void*)ptr1);
    } else {
        printf("O maior endereco e: %p\n", (void*)ptr2);
    }

    return 0;
}
