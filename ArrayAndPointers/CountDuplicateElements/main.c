#include <stdio.h>

void array(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Enter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
}

void dupEle(int arr1[], int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int count_ele = 0;
        if (arr1[i] >= 0)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr1[i] == arr1[j])
                {
                    arr1[j] = -1;
                    count_ele++;
                }
                
            }
            
        }
        if (count_ele > 0)
        {
            count++;
        }
        
    }
    printf("Total number of duplicate elements in the array: %d",count);
}

int main(){
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&x);
    int arr[x];
    array(arr, x);
    dupEle(arr, x);
    return 0;
}