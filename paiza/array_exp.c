#include <stdio.h>
int main(void) {
    int num[4];
    printf("%d\n", num[0]);
    if (num[2] == 0) printf("The elements are initialized by 0\n");
    return 0;
}
