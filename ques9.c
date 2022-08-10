// Function in C to merge two arrays of the same size sorted in descending order.
#include <stdio.h>
void merge_sort(int a[], int b[], int c[], int nc){
    int i;

    // Merge elements of two arrays in third array
    for(i = 0; i < nc; ++i){
        if(i < 10){
            c[i] = a[i];
        }else{
            c[i] = b[i - 10];
        }
    }
}