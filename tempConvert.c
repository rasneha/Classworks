#include<stdio.h>

int main() {

printf("CONVERT CELCIUS INTO FAHRENHEIT\n");

float C,F;

printf("Enter the temperature in Celcius: \n");
scanf("%f" , &C);
F = (C* 9/5)+32;
printf("The temperature in Fahrenheit is: %.2f\n", F);


return 0;
}
