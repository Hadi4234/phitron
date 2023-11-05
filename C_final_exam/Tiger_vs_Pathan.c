#include <stdio.h>

char determine_winner(int N, char rounds[]) {
    int tiger_wins = 0;
    int pathan_wins = 0;

    for (int i = 0; i < N; i++) {
        if (rounds[i] == 'T') {
            tiger_wins++;
        } else if (rounds[i] == 'P') {
            pathan_wins++;
        }
    }

    if (tiger_wins > pathan_wins) {
        return 'T';
    } else if (pathan_wins > tiger_wins) {
        return 'P';
    } else {
        return 'D'; 
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);

        char rounds[N];
        scanf("%s", rounds);

        char winner = determine_winner(N, rounds);

        if (winner == 'T') {
            printf("Tiger\n");
        } else if (winner == 'P') {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
}
