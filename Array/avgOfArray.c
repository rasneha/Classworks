#include <stdio.h>
int main(){

int n, arr[1000];
scanf("%d", &n);
for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
}
float sum = 0.0;
for(int i=0; i<n; i++){
    sum += arr[i];
}
float avg = sum/n;
printf("Average: %.2f\n", avg);
    return 0;
}
