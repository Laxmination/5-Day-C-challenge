#include<stdio.h>
 
 int main()
 {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d\n", _age);

    // ADDRESS
    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);

    // DATA
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%p\n", *(&age));

    return 0;
 }