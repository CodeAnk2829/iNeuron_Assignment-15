// Function to find the greatest element in an array of any size (TSRS).
#include <stdio.h>
int GreatestElement(int a[] , int size){
    int max_element = a[0];
    int i;

    // Finding the largest element
    for(i = 0; i < size; ++i){
        if(max_element < a[i]){
            max_element = a[i];
        }
    }
    return max_element;
}