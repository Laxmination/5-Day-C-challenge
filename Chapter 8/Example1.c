#include<stdio.h>
#include<string.h>

struct Student
{

    int roll;
    float cgpa;
    char name[100]; 
};

int main()
{
    struct Student s1;
    s1.roll =1;
    s1.cgpa = 4.0;
    strcpy(s1.name, "Basant");

    printf("Student name = %s\n", s1.name);
    printf("Student's roll no. is %d\n", s1.roll);
    printf("Student's cgpa is %f\n", s1.cgpa);

    return 0;
}
