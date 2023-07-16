#include <stdio.h>

/*
    n = 4

    4444
    333
    22
    1
*/

int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for ( int j = 0; j < n - i; j++){
            printf("%d", (n - i));
        }
        printf("\n");
    }
}