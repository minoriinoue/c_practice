#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    char s2[] = " ";
    char *name;
    char *sex;
    name = strtok(str, s2);
    sex = strtok(NULL, s2);
    if (strcmp(sex, "M\n") == 0) {
        printf("%s%s\n", "Hi, Mr. ", name);
    } else {
        printf("%s%s\n", "Hi, Ms. ", name);
    }
    return 0;
}
