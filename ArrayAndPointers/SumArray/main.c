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

void sumArray(int arr[], int size){
    int sum = 0;
    printf("Sum of elements in the array: ");
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("%d",sum);
}

int main(){
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&x);
    int arr[x];
    array(arr, x);
    printArray(arr, x);
    sumArray(arr, x);
    return 0;
}