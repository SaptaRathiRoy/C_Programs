#include <stdio.h>

void swap(int * a, int * b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("The first number is snow: %d\n", a);
    printf("The second number is now: %d\n", b);
    swap(&a, &b);
    printf("The first number is now: %d\n", a);
    printf("The second number is now: %d\n", b);
}