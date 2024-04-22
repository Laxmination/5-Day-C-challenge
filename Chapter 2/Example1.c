#include<stdio.h>
int main() {
int price = 25;
int oldPrice = price;
int newPrice = oldPrice + 10;
printf("new Price is : %d", newPrice);
int rupee = 1, dollar;
dollar = 74;


printf("%d \n", 4==4);
printf("%d \n", 4<3);
printf("%d \n", 3<4);
printf("%d \n", 4<4);
printf("%d \n", 4<=4);
printf("%d \n", 4>3);
printf("%d \n", 3>4);
printf("%d \n", 4>4);
printf("%d \n", 4>=4);
printf("%d \n", 4!=4);
printf("%d \n", 3!=4);


// Logical operator
printf("%d \n", 3<4 && 3<5);
printf("%d \n", 3<4 && 5<4);
printf("%d \n", 3<4 && 5<4);
printf("%d \n", 3>4 && 5>4);
printf("%d \n", 3<4 && 3<5);
printf("%d \n", !(3<4 && 3<5));
printf("%d \n", !(4<3 || 5<3));

//Assignment operator
int a = 10;
a += 10;
printf("a+10 = %d \n", a);
a -= 10;
printf("a-10 = %d \n", a);
a *= 10;
printf("a*10 = %d \n", a);
a /= 10;
printf("a/10 = %d \n", a);
a %= 10;
printf("a%c10 = %d \n", '%', a);


return 0;
}