#include <stdio.h>

int binarySearch(int arr[], int size, int key){
    int low = 0, high = size - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }
        else{
            low = mid + 1;
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
    int index = binarySearch(arr, size, key);
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