#include <stdio.h>

int main() {
printf("please enter height in inch, " "for example \"5 7\" to show 5 foot 7inch: ");
int foot;
int inch;
scanf ("%d %d", &foot, &inch);
printf("heigh is %f meter \n", ((foot+inch/12.0)*0.3048));
}