#include <stdio.h>

int main() {
int a, b ;
printf("please enter two integers");
scanf("%d %d", &a, &b);
int max = 0;
if(a>b) {
    max = a;
} else {
    max = b;
}
printf("the biggest integer is %d\n", max);
}