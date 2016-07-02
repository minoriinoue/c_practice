#include <stdio.h>

enum {
    summer,
    winter,
    none,
};
int if_olympic(int);

int main(void) {
    int year;
    scanf("%d", &year);
    int result = if_olympic(year);
    if (result == summer) printf("summer olympics\n");
    else if (result == winter) printf("winter olympics\n");
    else printf("none!\n");
    return 0;
}

int if_olympic(int year) {
    if (year % 2 == 0) {
        if (year % 4 == 0) return summer;
        else return winter;
    } else {
        return none;
    }
}
