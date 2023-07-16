#include <stdio.h>

void printArray(int arr[], int size){
    printf("Elements in the array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int left[], int right[], int n1, int n2){
    int i = 0, j = 0, k = 0;
    while ((i < n1) && (j < n2))
    {
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
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
    int arr[size1+size2], arr1[size1], arr2[size2];
    printf("First array: \n");
    array(arr1, size1);
    printArray(arr1, size1);
    printf("Second array: \n");
    array(arr2, size2);
    printArray(arr2, size2);
    merge(arr, arr1, arr2, size1, size2);
    printf("Merged array: \n");
    printArray(arr, size1+size2);
    return 0;
}