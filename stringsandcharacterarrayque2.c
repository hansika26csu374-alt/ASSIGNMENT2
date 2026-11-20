#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    scanf("%s", str);

    int len = strlen(str);
    int count = 1;

    for (int i = 1; i <= len; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            printf("%c%d", str[i - 1], count);
            count = 1;
        }
    }

    return 0;
}