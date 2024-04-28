# Pointer

Pointer is a variable that stores the memory address of another variable.

### Syntax

int age = 22;<br>
int *ptr = &age;<br>
int _age = *ptr;

### Declaring Pointers

int *ptr;<br>
char *ptr;<br>
float *ptr;

### Format Specifier
printf("%p", &age);<br>
printf("%p", ptr);<br>
printf("%p", &ptr);

## Pointer to pointer

A variable that stores the memory address of another pointer.

### Syntax
int **pptr;<br>
char **pptr;<br>
float **pptr;


## Pointers in Function Call

- <b>Call by value: </b>We pass value of variables as arguement.
- <b>Call by Reference: </b>We pass address of variable as arguement.

