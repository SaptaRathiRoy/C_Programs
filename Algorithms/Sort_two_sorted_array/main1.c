#include <stdio.h>
#include "../Quick_Sort/main.h"

void sort(int arr1[], int arr2[], int size1, int size2){
    int i = 0, j = 0, k = size1 - 1;
    while (i <= k && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            i++;
        }
        else
        {
            swap(&arr1[k--], &arr2[j++]);
        }
    }
    quickSort(arr1, 0, size1 - 1);
    quickSort(arr2, 0, size2 - 1);
}

void printArray(int arr[], int size){
    printf("Elements in the array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void array(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Enter element for index %d: ", i);
        scanf("%d", &arr[i]);
    }

}

int main(){
    int size1, size2;
    printf("Enter number of elements in first array: ");
    scanf("%d", &size1);
    printf("Enter number of elements in second array: ");
    scanf("%d", &size2);
    int arr1[size1], arr2[size2];
    printf("First array: \n");
    array(arr1, size1);
    printArray(arr1, size1);
    printf("Second array: \n");
    array(arr2, size2);
    printArray(arr2, size2);
    sort(arr1, arr2, size1, size2);
    printf("Merged array: \n");
    printArray(arr1, size1);
    printArray(arr2, size2);
    
    return 0;
}