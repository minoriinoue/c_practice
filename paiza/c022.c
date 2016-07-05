#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char str[5];
    int n = atoi(fgets(str, sizeof(str), stdin));
    int hajime;
    int owari;
    int min;
    int max;

    for (int i = 0; i < n; i++) {
        char s[32];
        fgets(s, sizeof(s), stdin);
        char *p;
        for (int j = 0; j < 4; j++) {
            if (j == 0) {
                p = strtok(str, " ");
            } else {
                p = strtok(NULL, " ");
            }
            printf("input done.\n");
            int n = atoi(p);
            if (i == 0 && j == 0) {
                hajime = atoi(p);
            } else if (i == n - 1 && j == 1) {
                owari = atoi(p);
            }
            printf("hajime and owari done.\n");
            if (i == 0 && j == 2) {
                printf("i: 0, j: 2\n");
                printf("atoi[p]: %d\n", atoi(p));
                max = atoi(p);
            } else if (i == 0 && j == 3) {
                printf("here!\n");
                min = atoi(p);
            } else if (j == 2) {
                if (max < atoi(p)) max = atoi(p);
            } else if (j == 3) {
                if (min > atoi(p)) min = atoi(p);
            }
            printf("max min done\n");
        }
    }
    printf("%d %d %d %d\n", hajime, owari, max, min);
    return 0;
}
