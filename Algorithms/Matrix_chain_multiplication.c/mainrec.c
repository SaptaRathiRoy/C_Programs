#include <stdio.h>
#include <limits.h>

int min(int a, int b){
    if (a < b)
    {
        return a;
    }
    return b;
}

int mat_mal(int arr[], int i, int j){
    if (i+1 == j)
    {
        return 0;
    }
    int min_val = INT_MAX;
    for (int k = i+1 ; k < j; k++)
    {
        min_val = min(min_val, mat_mal(arr, i, k)+mat_mal(arr, k, j)+arr[i]*arr[k]*arr[j]);
    }
    return min_val;
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
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    array(arr, size);
    printArray(arr, size);
    printf("Minimum numbers of multiplication required are: %d", mat_mal(arr, 0, size - 1));
    
    return 0;
}