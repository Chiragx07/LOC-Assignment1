<<<<<<< HEAD
#include <stdio.h>

int main() {
    int num, i, fact = 1;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    for (i = 1; i <= *ptr; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %d", *ptr, fact);

    return 0;
=======
#include <stdio.h>

int main() {
    int num, i, fact = 1;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    for (i = 1; i <= *ptr; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %d", *ptr, fact);

    return 0;
>>>>>>> 3eccf9c650c4d34295ebdd652a8b0860f54402f1
}