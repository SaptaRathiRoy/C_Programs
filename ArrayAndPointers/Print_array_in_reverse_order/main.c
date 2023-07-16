#include <stdio.h>

void array(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Enter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }   
    printf("\n");
}

void swap(int * a, int * b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sortRev(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&x);
    int arr[x];
    array(arr, x);
    printf("The array is: ");
    printArray(arr, x);
    sortRev(arr, x);
    printf("The array in reverse order: ");
    printArray(arr, x);
    return 0;
}