#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m);

int main()
{
    char name[] = "Laxmi Kathayat";
    char nickname[] ={'a', 'n', 'o', 'n', 'y', 'm', 'o', 'u', 's', '\0'};

    for(int i =0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }



    printf("\n");
}
void slice(char str[], int n, int m)
{
    char newStr[100];
    int j = 0;
    for(int i = n; i <=m; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}