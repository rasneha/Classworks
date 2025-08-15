#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n==0){
        printf("The number is zero\n");
    }
    else{
    switch(n%2) {
        case 1:
            printf("The number is odd\n");
            break;
        case 0:
            printf("The number is even\n");
            break;
     }
    }
    return 0;
}