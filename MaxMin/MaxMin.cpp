#include <stdio.h>

int main() {
    int num[100];
    int i, max, min, n;

    printf("Number :");
    scanf("%d", &n);
    printf("Input %d numbers :\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d : ", i + 1);
        scanf("%d", &num[i]);
    }

    max = num[0];
    min = num[0];

    for (i = 1; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }

        if (num[i] < min) {
            min = num[i];
        }
    }

    printf("Maximum Number : %d\n", max);
    printf("Minimum Number : %d\n", min);
}