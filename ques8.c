// Function to print unique elements in an array
#include <stdio.h>
void countDuplicates(int a[], int n){
    int i, j, count = 1;

    // Counting unique elements 
    for(i = 0; i < n; ++i){
        for(j = 0; j < i; ++j){
            if(a[i] == a[j]){
                break;
            }
        }
        if(j == i){
            printf("%d ", a[i]);
        }
    }
}