#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int matrix[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int j = 0; j < M; j++) {
        printf("%d ", matrix[N - 1][j]);
    }
    printf("\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][M - 1] );
    }
    return 0;
}
