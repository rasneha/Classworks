#include <stdio.h>

int main() {
    int n1, n2;
    printf("first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements:\n", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements:\n", n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int merged[n1 + n2];
    for (int i = 0; i < n1; i++)
        merged[i] = arr1[i];
    for (int i = 0; i < n2; i++)
        merged[n1 + i] = arr2[i];

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);

    return 0;
}
