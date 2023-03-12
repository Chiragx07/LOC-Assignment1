#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("The sum is: %d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The difference is: %d", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The product is: %d", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Cannot divide by zero");
            } else {
                result = num1 / num2;
                printf("The quotient is: %d", result);
            }
            break;
        default:
            printf("Invalid operator");
            break;
    }

    return 0;
}

