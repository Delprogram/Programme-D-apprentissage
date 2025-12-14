#include <stdio.h>
/* Consignes
    Écris une fonction qui échange deux entiers en utilisant des pointeurs.

    Prototype :
    void swap(int *a, int *b);
*/

void swap(int *a, int *b);

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 5;
    int b = 4;

    swap(&a, &b);

    printf("a = %d\nb = %d\n", a, b);

    return 0;
}


