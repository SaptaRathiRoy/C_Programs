#include <stdbool.h>

void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low - 1, j = high + 1;
    while (true)
    {  
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
        {
            return j;
        }
        swap(&arr[i], &arr[j]);
    }
}

void quickSort(int arr[], int low, int high){
    if (low < high)
    {
        int loc = partition(arr, low, high);
        quickSort(arr, low, loc);
        quickSort(arr, loc + 1, high);
    }
    
}