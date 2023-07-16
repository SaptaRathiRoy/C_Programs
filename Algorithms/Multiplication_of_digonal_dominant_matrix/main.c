#include <stdio.h>

void digonal_mul(int size, int arr1[][size], int arr2[][size], int arr3[][size]){
    for (int i = 0; i < size; i++)
    {
        arr3[i][i] = arr1[i][i]*arr2[i][i];
    }
}

void ini_zeros(int size, int arr[][size]){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = 0;
        }
    }
}

void max_min(int size, int arr[][size]){
    int min = arr[0][0];
    int max = arr[0][0];
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i][i])
        {
            min = arr[i][i];
        }
        if (max < arr[i][i])
        {
            max = arr[i][i];
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
}

void printArray(int size, int arr[][size]){
    printf("Elements in the array:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

/*void array(int size, int arr[][size]){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter element for index %d,%d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}*/

void array(int size, int arr[][size]){
    for (int i = 0; i < size; i++)
    {
        printf("Row %d: ", i+1);
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

int main(){
    int size;
    printf("Enter size of square matrices: ");
    scanf("%d", &size);
    int arr1[size][size];
    int arr2[size][size];
    int arr3[size][size];
    ini_zeros(size, arr3);
    printf("Enter elements for array 1: \n");
    array(size, arr1);
    printArray(size, arr1);
    printf("Enter elements for array 2: \n");
    array(size, arr2);
    printArray(size, arr2);
    digonal_mul(size, arr1, arr2, arr3);
    printArray(size, arr3);
    max_min(size, arr3);
    
    return 0;
}