#include <stdio.h>
int main() {
    int arr[1000];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = arr[0];
    int max2 = arr[1];
    if(max2 > max1) {
        max1 = arr[1];
        max2 = arr[0];
    }
    for(int i = 2; i < n; i++){
        if(arr[i] > max1) {
            max2 = max1;
            max1 =  arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];  
        }
    }
        printf("%d", max2);
    
    return 0;
}