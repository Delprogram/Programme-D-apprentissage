#include <stdio.h>
/* Consignes
-- Exercice 2 — Somme d’un tableau

Écrire une fonction qui retourne la somme des éléments d’un tableau en utilisant uniquement des pointeurs (sans utiliser les index []).
*/

int sumArray(int *array, int *size, int *sum);

int sumArray(int *array, int *size, int *sum) {

    /* Avec les index[]
    for (int i = 0; i < *size; i++) {
        *sum += array[i];
    } */

    // Sans les index[]
    for (int i = 0; i < *size; i++) {
        *sum += *(array + i);
    }

}

int main() {
    int array[] = {2, 3, 4, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = 0;
    sumArray(array, &size, &sum);
    printf("Somme : %d\n", sum);

    return 0;
}


