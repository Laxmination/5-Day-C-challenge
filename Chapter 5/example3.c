#include<stdio.h>

int calcsq(int a);

int main()
{
    int a;
    printf("Enter a :\n");
    scanf("%d", &a);

    printf("Square of given number is : %d", calcsq(a));
    return 0; 
}

int calcsq(int a)
{
    return a *a;
}