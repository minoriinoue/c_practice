#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
    int sex; /*0: male, 1: female*/
} people;

void input_data(people arr[]);
void output_data(people arr[]);

int main(void) {
    people arr[3];
    input_data(arr);
    output_data(arr);
    return 0;
}

void input_data(people arr[]) {
    for (int i = 0; i < 3; i++) {
        printf("%d 番目の人の情報を入力します。\n", i+1);
        printf("Name?\n");
        scanf("%s", arr[i].name);
        printf("Age?\n");
        scanf("%d", &arr[i].age);
        printf("Sex? 0: male, 1: female\n");
        scanf("%d", &arr[i].sex);
    }
}

void output_data(people arr[]) {
    for (int i = 0; i < 3; i++) {
        printf("%d番めの人の情報を出力します。\n", i+1);
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        char sex[7];
        if (arr[i].sex == 0) strcpy(sex, "male");
        else strcpy(sex, "female");
        printf("Sex: %s\n", sex);
    }
}
