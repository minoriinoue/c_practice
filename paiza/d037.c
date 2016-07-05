#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str[4];
    fgets(str, sizeof(str), stdin);
    int t = atoi(str);
    fgets(str, sizeof(str), stdin);
    int day = atoi(str);
    printf("%d\n", day / t + 1);
    return 0;
}
