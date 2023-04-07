#include <stdio.h>

int main() {
    int ar1[5], ar2[5], merged_ar[10];
    
    
    printf("Enter 5 elements for the first array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ar1[i]);
    }
    
    
    printf("Enter 5 elements for the second array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ar2[i]);
    }
    
    
    for (int i = 0; i < 5; i++) {
        merged_ar[i] = ar1[i];
        merged_ar[i + 5] = ar2[i];
    }
    
   
    printf("Merged array in reverse order:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", merged_ar[i]);
    }
    printf("\n");
    
    return 0;
}

