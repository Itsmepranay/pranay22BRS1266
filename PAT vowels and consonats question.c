#include <stdio.h>
#include <ctype.h>

void countChars(char str[], int *words, int *vowels, int *consonants, int *space, int *special);

int main() {
    char str[100];
    int words = 0, vowels = 0, consonants = 0, space = 0, special = 0;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    countChars(str, &words, &vowels, &consonants, &space, &special);
    
    printf("Words = %d\n", words);
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Space = %d\n", space);
    printf("Special Characters = %d\n", special);
    
    return 0;
}

void countChars(char str[], int *words, int *vowels, int *consonants, int *space, int *special) {
    int i = 0;
    char ch;
    
    while (str[i] != '\0') {
        ch = str[i];
        
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            (*words)++;
            (*space)++;
        } else if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        } else if (isdigit(ch)) {
            (*special)++;
        } else {
            (*special)++;
        }
        
        i++;
    }
    
    (*words)++; // last word
}