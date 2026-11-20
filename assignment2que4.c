#include <stdio.h>

int isPerfectSquare(int n) {
    if (n < 0)
        return 0;

    long long i = 0;

    while (i * i < n)
        i++;

    return (i * i == n);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", isPerfectSquare(n));

    return 0;
}