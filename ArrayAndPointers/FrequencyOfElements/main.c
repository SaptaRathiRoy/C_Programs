#include <stdio.h>

void array(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Enter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
}

void fqEle(int arr[], int size){
    printf("The frequency of all the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        int count_ele = 1;
        if (arr[i] >= 0)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[j] = -1;
                    count_ele++;
                }
            }
            printf("%d occur %d times\n",arr[i],count_ele);
        }
    }
    printf("\n");
}

int main(){
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&x);
    int arr[x];
    array(arr, x);
    fqEle(arr, x);
    return 0;
}