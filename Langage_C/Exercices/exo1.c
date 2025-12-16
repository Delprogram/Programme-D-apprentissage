/* Consignes
    Écris une fonction qui échange deux entiers en utilisant des pointeurs.

    Prototype :
    void swap(int *a, int *b);
*/
#include <stdio.h>
void swap(int *a, int *b);

void swap(int *a, int *b){
    int conv_a;
    conv_a = *a;
    *a = *b;
    *b = conv_a;
}
int main() {
    int a = 5;
    int b = 10;
    swap( &a, &b);
    printf("a = %d ,b =  %d ", a , b);
}