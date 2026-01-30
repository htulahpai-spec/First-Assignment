#include <stdio.h>
int main() {
int i, n;
long fact = 1;
printf("Enter n: ");
scanf("%d", &n);
for (i = 1; i <= n; i++) fact *= i;
printf("Factorial = %ld\n", fact);
return 0;
}
