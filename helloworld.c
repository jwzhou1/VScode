#include <stdio.h>
int main() {
   int amount = 100;
   int price = 0;
   printf("enter price");
   scanf("%d", &price);
   printf("enter amount");
   scanf("%d", &amount);
   int change = amount - price;
   printf("give you %d money. \n", change);
   return 0;
}