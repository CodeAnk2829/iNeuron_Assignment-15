// Function to rotate an array by n position in d direction. The d is an indicative value for left or right.
#include <stdio.h>
void RotateArrayLeft(int a[], int n, int size){
    int i, temp;

    // Rotating the given array in left direction
    while(n--){
        temp = a[0];
        for(i = 0; i < size - 1; ++i){
            a[i] = a[i+1];
        }
        a[i] = temp;
    }

    // Display values of the array
    for(i = 0; i < size; ++i){
        printf("%d ", a[i]);
    }
}
void RotateArrayRight(int a[], int n, int size){
    int i, temp;

    // Rotating the given array in right direction
    while(n--){
        temp = a[size - 1];
        for(i = size - 1; i > 0; --i){
            a[i] = a[i - 1];
        }
        a[i] = temp;
    }

    // Display the values of the given array
    for(i = 0; i < size; ++i){
        printf("%d ", a[i]);
    }
}