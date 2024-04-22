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

return 0;
}