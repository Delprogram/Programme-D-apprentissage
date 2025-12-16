#include <stdio.h>
/*
-- Exercice 4 — Réimplémentation de strlen

Réécrire la fonction strlen() sans utiliser la bibliothèque standard.

Prototype :

int my_strlen(const char *str);
*/

int my_strlen(const char *str);

int my_strlen(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count ++;
    }
    
    return count;
}

int main() {
    const char str[] = "Bonjour";
    int strlen = my_strlen(str);
    printf("Strlen(%s) : %d\n", str, strlen);

    return 0;
}


