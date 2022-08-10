// Function to find the Smallest element in an array of any size (TSRS).
#include <stdio.h>
int SmallestElement(int a[], int size)
{
    int min_element = a[0];
    int i;

    // Finding the smallest element
    for (i = 0; i < size; ++i)
    {
        if (min_element > a[i])
        {
            min_element = a[i];
        }
    }
    return min_element;
}