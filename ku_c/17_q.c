#include <stdio.h>

int main(void) {
    FILE *fp;
    char *names[] = {"野比のび太", "源静香", "剛田武", "骨川スネ夫"};
    int score[] = {0, 90, 40, 70};

    fp = fopen("chap17.csv", "w");
    fprintf(fp, "%s,%s,%s\n", "番号", "名前", "成績");
    for (int i = 0; i < 4; i++) {
        fprintf(fp, "%d,%s,%d\n", i+1, names[i], score[i]);
    }
    fclose(fp);
}
