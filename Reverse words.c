#include <stdio.h>
#include <string.h>

void reverseword(char str[]) {
    int len = strlen(str);
    int end = len - 1;
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == '.') {
            // print word from i+1 to end
            for (int j = i + 1; j <= end; j++) {
                printf("%c", str[j]);
            }
            printf(".");
            end = i - 1; // update end
        }
    }

    // print the first word (from 0 to end)
    for (int j = 0; j <= end; j++) {
        printf("%c", str[j]);
    }
}
int main() {
    char str[] = "i.like.this.program.very.much";
    reverseword(str);
    return 0;
}

