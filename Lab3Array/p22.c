#include <stdio.h>

void main() {
    int rows, n = 1;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 0; i < rows; i++) {
        for (int space = 1; space < rows - i; space++) {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                n = 1;
            } else {
                n = n * (i - j + 1) / j;
            }
            printf("%d ", n);
        }
        printf("\n");
    }
}