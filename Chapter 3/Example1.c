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
    else if(age >= 12)
    {
        printf("You are a teenager");
    }
    else
    {
        printf("You are a child");
    }
    
    return 0;
}