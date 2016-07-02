
#include <stdio.h>

int main(void) {
    FILE *file;
    int buf[4];
    file = fopen("file_try.dat", "rb");
    fread(buf, sizeof(buf) * 3, 1, file);
    fclose(file);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", buf[i]);
    }
    return 0;
}
