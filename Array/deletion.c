#include <stdio.h>

int main() {
    int arr[1000] ;
    int n;
     scanf("%d", &n);
     int pos;
      scanf("%d", &pos);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
