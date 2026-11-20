#include <stdio.h>

int digitSum(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int dsum[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        dsum[i] = digitSum(arr[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (dsum[i] == dsum[j]) {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}