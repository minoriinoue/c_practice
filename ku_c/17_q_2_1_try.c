#include <stdio.h>

int main(void) {
    FILE *fp;
    int dat[3] = {10, 20, 30};

    fp = fopen("file_try.dat", "wb");
    fwrite(dat, sizeof(dat), 1, fp);
    fclose(fp);
    return 0;
}
