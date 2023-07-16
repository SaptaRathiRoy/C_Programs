#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int marks;
};

void display(struct Student * obj){
    printf("Name: %s\n", obj->name);
    printf("Roll: %d\n", obj->roll);
    printf("Marks: %d\n\n", obj->marks);
}

void read(struct Student * obj)
{
    gets(obj->name);
    printf("Enter name: ");
    gets(obj->name);
    printf("Enter roll: ");
    scanf("%d", &obj->roll);
    printf("Enter marks: ");
    scanf("%d", &obj->marks);
}

int main()
{
    struct Student obj[50];
    int count;
    printf("Enter number of objects: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        read(&obj[i]);
    }
    for (int i = 0; i < count; i++)
    {
        if (obj[i].marks >= 75)
        {
            display(&obj[i]);
        }
    }
    return 0;
}