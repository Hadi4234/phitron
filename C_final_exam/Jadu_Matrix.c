#include <stdio.h>

int isJaduMatrix(int matrix[100][100], int N, int M) {
    if (N != M) {
        return 0;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == j && matrix[i][j] != 1) {
                return 0;  
            } else if (i == N - 1 - j && matrix[i][j] != 1) {
                return 0;  
            } else if (i != j && i != N - 1 - j && matrix[i][j] != 0) {
                return 0;  
            }
        }
    }
    return 1; 
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int matrix[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isJadu = isJaduMatrix(matrix, N, M);

    if (isJadu) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
