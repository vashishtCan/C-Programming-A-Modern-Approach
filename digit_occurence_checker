#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i, j, n, store, counter;

start:

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;

    if (n < 0) n = -n;
    int temp = n;
    int digit = 0;

    if (temp == 0) digit = 1;
    while (temp > 0) {
        temp = temp / 10;
        digit++;
    }

    temp = n;
    int A[digit];
    int B[digit];
    int r = 0;

    for (i = 0; i < digit; i++) {
        A[i] = temp % 10;
        temp = temp / 10;
    }

    for (i = 0; i < digit - 1; i++) {
        for (j = i + 1; j < digit; j++) {
            if (A[i] > A[j]) {
                store = A[j];
                A[j] = A[i];
                A[i] = store;
            }
        }
    }

    for (i = 0; i < digit; i++) {
        bool found = false;
        for (j = 0; j < r; j++) {
            if (A[i] == B[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            B[r] = A[i];
            r++;
        }
    }

    printf("\n%-12s %s\n", "Digit:", "Occurrences");
    printf("----------------------\n");

    for (i = 0; i < r; i++) {
        counter = 0;
        for (j = 0; j < digit; j++) {
            if (B[i] == A[j]) counter++;
        }
        printf("%-12d %d\n", B[i], counter);
    }

    printf("\nDo you want to replay this code? (Yes: 1/ No: 0): ");
    int choice;
    if (scanf("%d", &choice) != 1) return 0;

    if (choice == 1) {
        goto start;
    } else {
        return 0;
    }
}
