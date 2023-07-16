#include <stdio.h>
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

void array(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Enter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
}

void printArray(int arr[], int size){
    printf("Elements in the array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int size;
    printf("Enter number of elements: ");
    scanf("%d",&size);
    int arr[size];
    array(arr, size);
    printArray(arr, size);
    quickSort(arr, 0, size - 1);
    printArray(arr, size);

    return 0;
}