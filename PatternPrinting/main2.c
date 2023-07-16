#include <stdio.h>

/*
    n = 4
    m = 3
    
    111
    222
    333
    444
*/

int main(){
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);
    for (int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            printf("%d", (i+1));
        }
        printf("\n");
    }
}