#include<stdio.h>

int factorial(int n);

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printf("Factorial is : %d", factorial(n));
    return 0;
}

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    int facn1 = factorial(n -1);
    int fac = facn1 * n;
    return fac;
    
}