#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int key = i;
        for (int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[key]){
                key = j;
            }
        }
        swap(&arr[key], &arr[i]);
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
    selectionSort(arr, size);
    printArray(arr, size);
    return 0;
}