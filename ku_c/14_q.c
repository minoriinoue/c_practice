#include <stdio.h>

int main(void) {
    char name[10];
    char last_name[10];
    printf("Type your first name.\n");
    scanf("%10s", name);
    printf("Type your last name\n");
    scanf("%10s", last_name);
    char whole_name[23];
    sprintf(whole_name, "%s %s\n", name, last_name);
    printf(whole_name);
}
