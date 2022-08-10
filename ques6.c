// Function to read an array of size n and display it in reverse order
#include <stdio.h>
void ReverseArray(int a[], int size){
    int i, temp;

    // Reversing the given array
    for(i = 0; i < size/2; ++i){
        temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }

    // Display the values of the given array
    for(i = 0; i < size; ++i){
        printf("%d ", a[i]);
    }
}