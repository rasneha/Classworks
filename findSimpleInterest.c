#include<stdio.h>

int main() {
    int P,T,R;
    printf("Enter Principal: ");
    scanf("%d", &P);
    printf("Enter Time: ");
    scanf("%d", &T);
    printf("Enter Rate: ");
    scanf("%d", &R);
    float SI = (P * T * R) / 100;
    printf("Simple Interest: %.2f\n", SI);
    return 0;
}