#include<stdio.h>

int main ()
{
    int marks[3];
    scanf("DAA: ");
    scanf("%d\n", &marks[0]);

    printf("Web Technology: ");
    scanf("%d", &marks[1]);

    printf("Cryptography: ");
    scanf("%d", &marks[2]);

    printf("DAA: %d\n", marks[0]);
    printf("Web Technology: %d\n", marks[1]);
    printf("Cryptography: %d\n", marks[2]);
}