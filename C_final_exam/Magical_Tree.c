#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int totalCols = N+10;
    int totalRows = (totalCols + 1) / 2; 
    for (int row = 1; row <= totalRows; row++) {
        for (int space = 1; space <= totalRows - row; space++) {
            printf(" ");
        }
        for (int star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        }
        printf("\n");
    }
   for (int row = 1; row <= 5; row++) {
        for (int space = 1; space <= 5; space++) {
            printf(" ");
        }
        for (int star = 1; star <= N; star++) {
            printf("*");
        }
        printf("\n");
    }
}