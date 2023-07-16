#include <stdio.h>

void array(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Enter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
}

void minMaxArray(int arr[], int size){
    int min = arr[0], max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);
}

int main(){
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&x);
    int arr[x];
    array(arr, x);
    minMaxArray(arr, x);
    return 0;
}