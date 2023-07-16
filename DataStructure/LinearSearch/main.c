#include <stdio.h>

int linearSearch(int arr[], int low, int high, int key){
    for (int i = 0; i <= high; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    return -1;
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
    int key;
    printf("Enter element: ");
    scanf("%d",&key);
    int index = linearSearch(arr, 0, size - 1, key);
    if (index > -1)
    {
        printf("Element found at index: %d", index);
    }
    else
    {
        printf("Element is not present.");
    }
    
    return 0;
}