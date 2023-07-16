#include <stdio.h>

void sort(int arr1[], int arr2[], int size1, int size2){
    for (int j = size2 - 1; j >= 0; j--)
    {
        int last = arr1[size1 - 1];
        int i = size1 - 2;
        while (arr1[i] > arr2[j] && i > -1)
        {
            arr1[i + 1] = arr1[i];
            i--;
        }
        if (i != size1 - 2)
        {
            arr1[i+1] = arr2[j];
            arr2[j] = last;
        }
    }
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