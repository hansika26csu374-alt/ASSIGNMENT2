#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch == ' ') {
            spaces++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("%d %d %d %d", vowels, consonants, digits, spaces);

    return 0;
}