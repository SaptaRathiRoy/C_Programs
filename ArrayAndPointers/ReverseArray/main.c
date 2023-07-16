#include <stdio.h>

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

void reverseArray(int arr[], int size){
    printf("Elements in the array in reverse order: ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
}

int main(){
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&x);
    int arr[x];
    array(arr, x);
    printArray(arr, x);
    reverseArray(arr, x);    
    return 0;
}