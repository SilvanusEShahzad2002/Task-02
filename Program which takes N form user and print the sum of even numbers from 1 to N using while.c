#include <stdio.h>

int main() {
    int N, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    while (i <= N) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }

    printf("Sum of even numbers = %d\n", sum);

    return 0;
}

