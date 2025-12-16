#include <stdio.h>
#include <string.h>
/*
-- Exercice 5 — Palindrome

Vérifier si une chaîne de caractères est un palindrome
(exemple : "radar").
*/

int isPalindrome(const char *word);

int my_strlen(const char *str);

int my_strlen(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count ++;
    }
    
    return count;
}

int isPalindrome(const char *word) {
    int count = my_strlen(word) ;
    for (int i = 0; i < count; i++) {
        if (i == count - i) break;
e        if (word[i] != word[count - 1 - i]) {
            return 1;
        } 
    }
    
    return 0;
}

int main() {
    const char word[10];
    printf("Entrez un mot : ");
    scanf("%s", &word);
    int ispalindrome = isPalindrome(word);
    if (ispalindrome == 0) 
        printf("%s est un palindrome.\n", word);
    else 
        printf("%s n'est pas un palindrome.\n", word);

    return 0;
}


