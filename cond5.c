#include <stdio.h>
int main() {
int age, student;
printf("Enter age: ");
scanf("%d", &age);
printf("Student (1=yes, 0=no): ");
scanf("%d", &student);
if (age < 12) {
printf("Ticket price = 50\n");
} else if (age <= 60) {
if (student == 1) printf("Ticket price = 80\n");
else printf("Ticket price = 100\n");
} else {
printf("Ticket price = 60\n");
}
return 0;
}
