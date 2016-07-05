#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int var[2] = {0, 0};
    char str[3];
    int n = atoi(fgets(str, sizeof(str), stdin));
    for (int i = 0; i < n; i++) {
        char order[12];
        fgets(order, sizeof(order), stdin);
        char * instruction = strtok(order, " ");
        if (strcmp(instruction, "SET") == 0) {
            printf("set\n");
            int v = atoi(strtok(NULL, " "))-1;
            var[v] = atoi(strtok(NULL, " "));
        } else if (strcmp(instruction, "ADD") == 0) {
            printf("add\n");
            var[1] = var[0] + atoi(strtok(NULL, " "));
        } else {
            printf("sub\n");
            var[1] = var[0] + atoi(strtok(NULL, " "));
        }
    }
    printf("%d %d\n", var[0], var[1]);
    return 0;
}
