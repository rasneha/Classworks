#include<stdio.h>

int main() {

float r;
printf("Enter the radius:");
scanf("%f", &r);

printf("the diameter of the circle is: %.1f\n", 2 * r);
printf("the circumference of the circle is: %.2f\n", 2 * 3.14159 * r);
printf("the area of the circle is: %.2f\n", 3.14159 * r * r);


    return 0;
}