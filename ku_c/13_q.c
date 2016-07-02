#include <stdio.h>

int main(void) {
    int input[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &input[i]);
    }
    for (int i = 9; i >= 0; i--) {
        printf("input[%d]: %d\n", i, input[i]);
    }
    return 0;
}
