#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int years= a/365;
    int b=a%365;
    int months=b/30;
    int days=b%30;
    printf("%d years\n%d monts \n%d days", years , months , days);
    return 0;
}
