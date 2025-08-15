#include<stdio.h>

int main() {
    int m,n,sum;
    printf("Enter the smaller number: ");
    scanf("%d", &m);
    printf("Enter the larger number: ");
    scanf("%d", &n);
    sum = 0;
    for(int i=m ; i<= n ; i++){
        sum=sum+i;

    }
    printf("Sum of numbers between %d and %d is: %d\n", m, n, sum);
    return 0;
}