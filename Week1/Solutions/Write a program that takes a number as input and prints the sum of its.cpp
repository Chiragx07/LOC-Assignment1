#include <stdio.h>

int main() {
    int number, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    do {
        digit = number % 10;
        sum += digit;
        number /= 10;
    } while (number != 0);

    printf("The sum of the digits is %d.", sum);

    return 0;
}

