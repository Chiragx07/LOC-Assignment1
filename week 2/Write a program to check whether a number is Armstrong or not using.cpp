#include <stdio.h>
#include <math.h>

int Armstrong(int num) {
    int temp, digit, sum = 0, n = 0;

    temp = num;
    while (temp != 0) {
        n++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    if (num == sum)
        return 1;
    else
        return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (Armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}

