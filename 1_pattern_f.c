#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}