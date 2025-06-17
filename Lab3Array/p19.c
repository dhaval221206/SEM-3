// wap to find position of the smallest number & largest number from given n number

#include <stdio.h>

void main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("Smallest number is at position: %d\n", minIndex);
    printf("Largest number is at position: %d\n", maxIndex);
}