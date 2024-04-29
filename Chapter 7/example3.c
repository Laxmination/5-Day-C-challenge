#include<stdio.h>
#include<string.h>

int main()
{
    char name[] = "Laxmi Kathayat";
    char nickname[] ={'a', 'n', 'o', 'n', 'y', 'm', 'o', 'u', 's', '\O'};

    for(int i =0; name[i] != '\O'; i++)
    {
        printf("%c", name[i]);
    }

    printf("\n");
}