#include <stdio.h>

void array(int arr[], int size){
    printf("Enter element in ascending order:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void mergeArrayDesc(int arr[], int arr1[], int arr2[], int size1, int size2){
    int count = 0, size = size1 + size2;
    size1--;
    size2--;
    while (count < size)
    {
        if (size1 < 0)
        {
            arr[count] = arr2[size2];
        }
        else if (size2 < 0)
        {
            arr[count] = arr1[size1];
        }
        else if (arr1[size1] < arr2[size2])
        {
            arr[count] = arr2[size2];
            size2--;
        }
        else
        {
            arr[count] = arr1[size1];
            size1--;
        }
        count++;
    }
    
    
}

int main(){
    int x, y;
    printf("Enter number of elements in array 1: ");
    scanf("%d",&x);
    int arr1[x];
    array(arr1, x);
    printf("Enter number of elements in array 2: ");
    scanf("%d",&y);
    int arr2[y];
    array(arr2, y);
    int arr3[x+y];
    mergeArrayDesc(arr3, arr1, arr2, x, y);
    printArray(arr3, x+y);
    return 0;
}