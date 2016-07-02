#include <stdio.h>

int main(void) {
    int score;
    do {
        scanf("%d", &score);
    } while (score < 0);
    printf("score is: %d\n", score);
}
