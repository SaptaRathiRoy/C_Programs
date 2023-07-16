#include <stdio.h>

void array(int arr[], int size){
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

void copyArray(int arr[], int arrcpy[], int size){
    for (int i = 0; i < size; i++)
    {
        arrcpy[i] = arr[i];
    }
}

int main(){
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&x);
    int arr1[x], arr2[x];
    array(arr1, x);
    copyArray(arr1, arr2, x);
    printf("Elements in the 1st array: ");
    printArray(arr1, x);
    printf("\nThe elements copied in the 2nd array: ");
    printArray(arr2, x);
    return 0;
}