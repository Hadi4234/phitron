#include <stdio.h>
#include <string.h>

int main() {
    int alphabet_counts[26] = {0};
    char S[10001];
    scanf("%s", S);
    for (int i = 0; i <strlen(S); i++) {
        char c = S[i];
        if (c >= 'a' && c <= 'z') {
            alphabet_counts[c - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (alphabet_counts[i] > 0) {
            printf("%c - %d\n", 'a' + i, alphabet_counts[i]);
        }
    }

    return 0;
}
