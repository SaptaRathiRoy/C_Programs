#include <stdio.h>

void array(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Enter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
}

void uqEle(int arr[], int size){
    printf("The unique elements are found in the array are: ");
    for (int i = 0; i < size; i++)
    {
        int count_ele = 0;
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
            if (count_ele == 0)
            {
                printf("%d ",arr[i]);
            }
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
    uqEle(arr, x);
    return 0;
}