#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
    char name[20];
    int age;
    int sex; /*0: male, 1: female*/
} people;

int input_data(people arr[], int);
void output_data(people arr[], int);

int main(void) {
    int num_people = 0;
    int hp_size_ppl = 10;
    people *hp;
    hp = (people *)malloc(sizeof(people) * hp_size_ppl);
    if (hp == NULL) exit(0);
    int if_input_finish;
    do {
        if_input_finish = input_data(hp, num_people);
        num_people++;
        if (num_people >= hp_size_ppl) {
            hp_size_ppl *= 2;
            hp = (people *)realloc(hp, sizeof(people) * hp_size_ppl);
            if (hp == NULL) exit(0);
        }
    } while (if_input_finish != -1);
    output_data(hp, num_people);
    free(hp);
    return 0;
}

int input_data(people arr[], int num_people) {
    printf("%d 番目の人の情報を入力します。\n", num_people+1);
    printf("Name?\n");
    scanf("%s", arr[num_people].name);
    printf("Age?\n");
    scanf("%d", &arr[num_people].age);
    printf("Sex? 0: male, 1: female\n");
    scanf("%d", &arr[num_people].sex);
    if (arr[num_people].age == -1) return -1;
    else return 1;
}

void output_data(people arr[], int num_people) {
    for (int i = 0; i < num_people; i++) {
        printf("%d番めの人の情報を出力します。\n", i+1);
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        char sex[7];
        if (arr[i].sex == 0) strcpy(sex, "male");
        else strcpy(sex, "female");
        printf("Sex: %s\n", sex);
    }
}
