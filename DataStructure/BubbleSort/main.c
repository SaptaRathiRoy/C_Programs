#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++){
        for (int j = 0; j < size-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
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
    bubbleSort(arr, size);
    printArray(arr, size);
    return 0;
}