#include <stdio.h>
#include <string.h>
int is_palindrome(const char *str) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    char S[1001];
    
    scanf("%s", S);

    int result = is_palindrome(S);

    if (result == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
