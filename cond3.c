#include <stdio.h>
int main() {
int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
if (a > b) printf("A is larger\n");
else if (b > a) printf("B is larger\n");
else printf("Equal\n");
return 0;
}
