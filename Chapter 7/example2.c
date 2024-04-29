#include<stdio.h>

void printNummber(int *arr, int n);
void _printNumber(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNummber(arr, 6);
    _printNumber(arr, 6);

    return 0;
}

void printNumber(int *arr, int n)
{
    for(int i =0; i <n; i++)
    {
        printf("%d: %d\n", i, arr[i]);
    }
}

void _printNumber(int arr[], int n)
{
    for(int i =0; i <n; i++)
    {
        printf("%d :%d\n", i, arr[i]);
    }
}