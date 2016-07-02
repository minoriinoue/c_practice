#include <stdio.h>

int main(void) {
    int cost_soft_drink = 198;
    int cost_milk = 138;
    int num_soft_drink = 1;
    int num_milk = 2;
    int money = 1000;
    int tax = 5;

    int change;
    int cost = cost_soft_drink * num_soft_drink + cost_milk * num_milk;
    change = money - (int) ((tax * 0.01 + 1) * cost);
    printf("Change is: %d\n", change);
    return 0;
}
