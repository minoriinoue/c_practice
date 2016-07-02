#include <stdio.h>

int main(void) {
    int original_price;
    scanf("%d", &original_price);
    printf("10%% off: %d\n", (int) (original_price * 0.9));
    printf("30%% off: %d\n", (int) (original_price * 0.7));
    printf("50%% off: %d\n", (int) (original_price * 0.5));
    printf("80%% off: %d\n", (int) (original_price * 0.2));
    return 0;
}

