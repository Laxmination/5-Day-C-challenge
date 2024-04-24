#include<stdio.h>
#include<math.h>

int main()
{
    float num, root;
    printf("Enter a number: ");
    scanf("%f", &num);

    root = sqrt(num); // sqrt is pre-defined function here

    printf("Square root of %f = %f", num, root);

    return 0;
}