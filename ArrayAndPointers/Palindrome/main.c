#include <stdio.h>

int length(char str[])
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return --count;
}

void palindrome(char str[])
{
    int low = 0, high = length(str);
    while (high > low)
    {
        if (str[high] != str[low])
        {
            printf("Not a palindrome");
            return;
        }
        high--;
        low++;
    }
    printf("Palindrome");   
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    palindrome(str);
    return 0;
}
