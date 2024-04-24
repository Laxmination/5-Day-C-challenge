#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are an adult");
    }
    else 
    {
        printf("You are a child");
    }
    
    return 0;
}