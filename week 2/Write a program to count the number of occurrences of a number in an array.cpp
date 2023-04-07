#include <stdio.h>

int count_occurrences(int arr[], int size, int num) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int my_array[] = {1, 2, 3, 4, 4, 4, 5};
    int my_number = 4;
    int size = sizeof(my_array) / sizeof(my_array[0]);
    int result = count_occurrences(my_array, size, my_number);
    printf("The number %d appears %d times in the array.\n", my_number, result);
    return 0;
}

