#include <stdio.h>
/* 
-- Exercice 3 — Maximum d’un tableau

Trouver le plus grand élément d’un tableau en utilisant :

une fonction

des pointeurs
*/

int findMaximum(int *array, int *size, int *max);

int findMaximum(int *array, int *size, int *max) {

    /* Avec les index[]
    for (int i = 0; i < *size - 1; i++) {
        if (*max < array[i + 1]) 
            *max = array[i + 1];
    } */

    // Avec les pointeurs
    for (int i = 0; i < *size - 1; i++) 
        if (*max < *(array + i + 1)) 
            *max = *(array + i + 1);
}

int main() {
    int array[] = {10, 3, 9, 5, 17};
    int size = sizeof(array) / sizeof(array[0]);
    int max = array[0];
    findMaximum(array, &size, &max);
    printf("Maximum : %d\n", max);

    return 0;
}


