#include <stdio.h>

int main() {
    int arr1[5], arr2[5];
    int i;

   
    printf("Enter the original array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

   
    for (i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }

    y
    printf("The copied array is:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

