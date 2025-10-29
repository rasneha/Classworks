#include <stdio.h>
int main() {
    int arr[1000];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max , min;

    max = min = arr[0];
     for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}
