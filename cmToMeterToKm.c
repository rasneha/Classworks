#include<stdio.h>

int main() {
    int cm, m;
    printf("Enter the cm value:");
    scanf("%d", &cm);
    m = cm / 100;
    float km = (float)m / 1000;
    printf("In meter: %d\n", m);
    printf("In KM: %.2f\n", km);
    return 0;
}