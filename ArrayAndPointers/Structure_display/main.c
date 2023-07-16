#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    int roll;
    char name[50];
    int marks;
} Stud;

void display(Stud * obj){
    printf("Roll: %d\n", obj->roll);
    printf("Marks: %d\n", obj->marks);
    printf("Name: %s\n", obj->name);
}

void read(Stud * obj)
{
    printf("Enter name: ");
    gets(obj->name);
    printf("Enter roll: ");
    scanf("%d", &obj->roll);
    printf("Enter marks: ");
    scanf("%d", &obj->marks);
}

int main(){
    Stud * obj1 = (Stud *)malloc(sizeof(Stud));
    read(obj1);
    display(obj1);
    return 0;
}