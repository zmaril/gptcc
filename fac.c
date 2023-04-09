#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Factorial of %d is %d\n", number, factorial(number));

    return 0;
}
