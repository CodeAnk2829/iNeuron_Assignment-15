// Function in C to count a total number of duplicate elements in an array.
int TotalDuplicateElements(int a[], int size){
    int i, j, count = 0;

    // Counting the unique elements in the given array
    for(i = 0; i < size; ++i){
        for(j = 0; j < i; ++j){
            if(a[j] == a[i]){
                break;
            }
        }
        if(j == i){
            count++;
        }
    }   

    // Returning the value of total dupicate elements (Total elements - Unique elements)
    return (size - count);
}