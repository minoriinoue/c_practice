#include <stdio.h>

int main(void) {
    int year;
    scanf("%d", &year);
    if (year % 4 == 0) printf("Olympic\n");
    if (year % 4 != 0) printf("Not Olympic year.\n");
    return 0;
}
