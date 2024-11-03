#include<stdio.h>
int main() {
    int a[7] = {3, 5, 17, 21, 12, 29, 32}; // Fix the array size to 7
    int max = a[0];
    int min = a[0];
    
    for (int i = 1; i < 7; i++) { // Start from 1 to compare with the first element
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) { // Fix the min condition
            min = a[i];
        }
    }
    
    printf("Max = %d\n", max);
    printf("Min = %d\n", min); // Print the label for min as well
    
    return 0;
}
