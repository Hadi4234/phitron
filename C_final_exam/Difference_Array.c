#include <stdio.h>
#include <math.h>
int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);
        int A[N], B[N], C[N];

        // Input array A
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        // Sort array B in ascending order
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (B[i] > B[j]) {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        // Calculate the absolute differences and store in array C
        for (int i = 0; i < N; i++) {
            C[i] = abs(A[i] - B[i]);
        }

        // Print array C
        for (int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
