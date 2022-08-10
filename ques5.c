// Function to find the first occurrence of adjacent duplicate values in the array (TSRS)
#include <stdio.h>
int AdjacentDuplicate(int a[], int size){
    int i;

    // Finding the adjacent duplicate elements
    for(i = 0; i < (size - 1); ++i){
        if(a[i] == a[i + 1]){
            break;
        }
    }
    if(i != (size - 1)){
        return a[i]; // Returning that element
    }
}