#include <stdio.h>

void if_olympic(int);

int main(void) {
    int year;
    scanf("%d", &year);
    if_olympic(year);
    return 0;
}

void if_olympic(int year) {
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            printf("Winter Olympic\n");
        } else {
            printf("Summer Olympic\n");
        }
    } else {
        printf("No Olympic\n");
    }
}
