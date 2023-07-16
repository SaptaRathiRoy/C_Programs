#include <stdio.h>
#include <stdlib.h>

int max(int a, int b){
    if (a >= b)
    {
        return a;
    }
    return b;
}

int min(int a, int b){
    if (a < b)
    {
        return a;
    }
    return b;
}

int dMax(int arr[], int low, int high){
    if (low == high)
    {
        return arr[low];
    }
    int mid = (low+high)/2;

    return max(dMax(arr, low, mid), dMax(arr, mid + 1, high));
}

int dMin(int arr[], int low, int high){
    if (low == high)
    {
        return arr[low];
    }
    int mid = (low+high)/2;
    return min(dMin(arr, low, mid), dMin(arr, mid + 1, high));
}

void array(int arr[], int size){
    printf("Enter elements: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    
}

void printArray(int arr[], int size){
    printf("Elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int size, key;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int *arr;
    arr = (int*)malloc(size*sizeof(int));
    array(arr, size);
    printArray(arr, size);
    printf("Max: %d\n", dMax(arr, 0, size - 1));
    printf("Min: %d\n", dMin(arr, 0, size - 1));

    return 0;
}