// Function to sort an array of any size
void SortArray(int a[], int size){
    int r, i, temp;

    // Sorting the given array in ascending order (Bubble sort)
    for(r = 1; r < size; ++r){
        for(i = 0; i < size - r; ++i){
            if(a[i] > a[i + 1]){
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}