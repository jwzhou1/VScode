#include <stdio.h>
int main() {
   int price = 0;
   printf("please enter the money: ");
   scanf("%d", &price);
   int change = 100 - price;
   printf("give you %d money back. \n", change);
}