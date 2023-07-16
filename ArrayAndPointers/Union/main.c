#include <stdio.h>
#include <string.h>

union data
{
    int integer;
    char str[10];
    float dec;
};


int main(){
    union data obj1, obj2, obj3;
    obj1.integer = 2;
    strcpy(obj2.str, "Soumya");
    obj3.dec = 29.323;
    printf("Object 1:%d\nObject 2:%s\nObject 3:%f", obj1.integer, obj2.str, obj3.dec);
    return 0;
}