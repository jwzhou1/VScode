#include <stdio.h>
int main() {
   int price = 0;
   int bill = 0;
   printf("please enter the money: ");
   scanf("%d", &price);
   printf("please enter the bill: ");
   scanf("%d", &bill);
   int change = bill - price;
   if (bill >= price){
   printf("give you %d money back. \n", change);
   } else {
   printf("your money doesnt enough. \n");
}
return 0;
}