#include <stdio.h>
#include <string.h>

void quarter(int min);
void test();

int main(int argc, char *argv[]) {
    int min = 0;

    if (argc > 1 && strcmp(argv[1], "--test") == 0) {
        test();
    } 
    else {
        printf("Введите минуты от 0 до 59: ");
        if (scanf("%d", &min) == 1) {
            quarter(min);
        } else {
            printf("Ошибка ввода\n");
        }
    }
    return 0;
}

void quarter(int min) {
    if (min >= 0 && min <= 59) {
        if (min < 15) {
            printf("первая четверть\n");
        } 
        else if (min < 30) {
            printf("вторая четверть\n");
        } 
        else if (min < 45) {
            printf("третья четверть\n");
        } 
        else {
            printf("четвертая четверть\n");
        }
    } 
    else {
        printf("Ошибка\n");
    }
}

void test() {
    printf("Позитивные случаи\n");
    printf("7 мин: "); quarter(7);
    printf("20 мин: "); quarter(20);
    printf("35 мин: "); quarter(35);
    printf("50 мин: "); quarter(50);
    printf("Негативный случаи\n");
    printf("65 мин: "); quarter(65);
    printf("-1 мин: "); quarter(-1);
}

