#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    char str[18];
    fgets(str, sizeof(str), stdin);
    int x = atoi(strtok(str, " "));
    int y = atoi(strtok(NULL, " "));
    int r1 = atoi(strtok(NULL, " "));
    int r2 = atoi(strtok(NULL, " "));
    int r1_to_2 = (int)pow((double)r1, 2.0);
    int r2_to_2 = (int)pow((double)r2, 2.0);
    char n_str[4];
    int n = atoi(fgets(n_str, sizeof(n_str), stdin));
    for (int i = 0; i < n; i++) {
        char x_y[8];
        fgets(x_y, sizeof(x_y), stdin);
        int x_i = atoi(strtok(x_y, " "));
        int y_i = atoi(strtok(NULL, " "));
        int v = (int)pow((double)(x - x_i), 2.0) + pow((double)(y - y_i), 2.0);
        if (v >= r1_to_2 && v <= r2_to_2) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
