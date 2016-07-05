#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str[5];
    int n = atoi(fgets(str, sizeof(str), stdin));
    int p[4] = {0, 0, 0, 0};
    for (int i = 0; i < n; i++) {
        char input[8];
        fgets(input, sizeof(input), stdin);
        int group = atoi(strtok(input, " "));
        p[group] += atoi(strtok(NULL, " "));
    }
    printf("%d\n", (p[0] / 100) * 5 + (p[1] / 100) * 3 + (p[2] / 100) * 2 + (p[3] / 100) * 1);
    return 0;
}
