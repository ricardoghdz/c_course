#include <cs50.h>
#include <stdio.h>
#include <string.h>

#include "structs.h"

#define STUDENTS 3

int main(void)
{
    student *students = malloc(STUDENTS * sizeof(student));

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("name: ");
        students[i].name = get_string();

        printf("dorm: ");
        students[i].dorm = get_string();

        printf("age: ");
        students[i].age = get_int();
    }

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("%s is in dorm %s and is %i years old.\n", students[i].name, students[i].dorm,  students[i].age);
    }
}
