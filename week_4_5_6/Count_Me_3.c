#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char str[1000];
        scanf("%s", str);

       int capitalCount = 0, smallCount = 0, digitCount = 0;

       for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            capitalCount++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            smallCount++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digitCount++;
        }
    }
      printf("%d %d %d\n", capitalCount, smallCount, digitCount);

    }
  
}
