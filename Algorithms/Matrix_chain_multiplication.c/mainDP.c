#include <stdio.h>
#include <limits.h>

int min(int a, int b){
    if (a < b)
    {
        return a;
    }
    return b;
}

int mat_mal(int arr[], int n){
    int dp[n][n];
    for (int i = 0; i < n-1; i++)
    {
        dp[i][i+1] = 0;
    }
    for (int gap = 2; gap < n; gap++)
    {
        for (int i = 0; i + gap < n; i++)
        {
            int j = i + gap;
            dp[i][j] = INT_MAX;
            for (int k = i + 1; k < j; k++)
            {
                dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]+arr[i]*arr[k]*arr[j]);
            }
        }
    }
    return dp[0][n-1];
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
    printf("Minimum numbers of multiplication required are: %d", mat_mal(arr, size));
    
    return 0;
}