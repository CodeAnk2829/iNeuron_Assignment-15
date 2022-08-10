// Function to find the frequency of each elements in a given array
#include <stdio.h>
void FrequencyOfEachElement(int a[], int n)
{
    int i, j, k, count;

    // Find the unique elements then count the frequency
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < i; ++j)
        {
            if (a[i] == a[j])
            {
                break;
            }
        }
        if (j == i)
        {
            count = 1;

            for(k = i + 1; k < n; ++k)
            {
                if(a[i] == a[k])
                count++;
            }

            printf("%d: %d\n", a[i], count);
        }
    }
}