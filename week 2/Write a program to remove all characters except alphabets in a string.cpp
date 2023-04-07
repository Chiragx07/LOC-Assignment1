#include <stdio.h>
#include <string.h>
#include <ctype.h>

int removeNonAlp(char* str) {
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        while (!isalpha(str[i])) {
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j+1];
            }
            str[j] = '\0';
        }
    }
    return 0;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    removeNonAlp(str);
    printf("The string with only alphabets is: %s\n", str);
    return 0;
}

