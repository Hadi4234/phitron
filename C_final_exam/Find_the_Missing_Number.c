#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        long long int M;
        long int A, B, C;
        scanf("%lld %ld %ld %ld", &M, &A, &B, &C);
        long int D = M / (A * B * C);
        if (A >= 0 && B >= 0 && C >= 0 && D >= 0 && M == A * B * C * D) {
            printf("%ld\n", D);
        } else {
        printf("%d\n", -1); 
        }
    }
    return 0;
}
