#include <stdio.h>

void min_max(int arr[]);

int main(void) {
    int input[10];
    for (int i = 0; i < 9; i++) {
        int tmp;
        scanf("%d", &tmp);
        if (tmp == -1) {
            break;
        } else {
            input[i] = tmp;
        }
    }
    min_max(input);
}

void min_max(int arr[]) {
    int min = arr[0];
    int max = arr[0];
    int i = 0;
    while (arr[i] != '\0') {
        if (min > arr[i]) min = arr[i];
        if (max < arr[i]) max = arr[i];
        i++;
    }
    printf("min: %d, max: %d\n", min, max);
}
