#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d\nConsonants: %d", vowels, consonants);
    return 0;
}