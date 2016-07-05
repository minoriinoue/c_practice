#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char str[9];
    fgets(str, sizeof(str), stdin);
    int n = atoi(strtok(str, " "));
    int d = atoi(strtok(NULL, " "));
    int e = atoi(strtok(NULL, " "));
    if (n <= d * e) printf("OK\n");
    else printf("NG\n");
    return 0;
}
