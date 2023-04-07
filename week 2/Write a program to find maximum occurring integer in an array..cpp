#include <stdio.h>

int main() {
    int arr[10];
    int fre[10];
    int i, j, max, max_index;

  
    printf("Enter the array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        fre[i] = 0; // Initialize all frequencies to 0
    }

     for (i = 0; i < 10; i++) {
        fre[i]++; // Increment the frequency of the current element
        for (j = i + 1; j < 10; j++) {
            if (arr[j] == arr[i]) {
                fre[i]++;
            }
        }
    }


    max = fre[0];
    max_index = 0;
    for (i = 1; i < 10; i++) {
        if (fre[i] > max) {
            max = fre[i];
            max_index = i;
        }
    }

    
    printf("The maximum occurring integer is %d.\n", arr[max_index]);

    return 0;
}

