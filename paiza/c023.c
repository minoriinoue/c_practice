#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int hash[100] = {0};
    char str[24];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < 6; i++) {
        int n;
        if (i == 0) {
            n = atoi(strtok(str, " "));
        } else {
            n = atoi(strtok(NULL, " "));
        }
        hash[n-1] = 1;
        printf("n: %d, hash[n-1]: %d\n", n, hash[n-1]);
    }
    char num[4];
    int n = atoi(fgets(num, sizeof(num), stdin));
    for (int i = 0; i < n; i++) {
        int counter = 0;
        fgets(str, sizeof(str), stdin);
        for (int j = 0; j < 6; j++) {
            int m;
            if (j == 0) {
                m = atoi(strtok(str, " "));
                printf("i: %d, j: %d, m: %d\n", i, j, m);
            } else {
                m = atoi(strtok(NULL, " "));
                printf("i: %d, j: %d, m: %d\n", i, j, m);
            }
            if (hash[m-1] == 1) {
                printf("here\n");
                printf("m: %d\n", m);
                counter++;
                printf("counter is now %d\n", counter);
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}
