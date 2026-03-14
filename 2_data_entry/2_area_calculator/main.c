#include <stdio.h>

float area(int c, float v);
void test();

int main(int argc, char *argv[]) {
  if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 't' &&
      argv[1][3] == 'e' && argv[1][4] == 's' && argv[1][5] == 't' &&
      argv[1][6] == '\0') {
    test();
    return 0;
  }
  int choice = 0;
  float value = 0;
  printf("Введите: 1 для площади круга или 2 для площади квадрата\n");
  if (scanf("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
    printf("Ошибка ввода.\n");
    return 1;
  } else {
    printf("Введите число:\n");
  }
  if (scanf("%f", &value) != 1) {
    printf("Ошибка ввода числа.\n");
    return 1;
  }
  if (value < 0) {
    printf("Ошибка число не может быть отрицательным.\n");
    return 1;
  }
  area(choice, value);
  return 0;
}

float area(int c, float v) {
  float pi = 3.1415;
  float a = 0;
  if (c == 1) {
    a = pi * v * v;
    printf("Площадь круга: %f\n", a);
  } else if (c == 2) {
    a = v * v;
    printf("Площадь квадрата: %f\n", a);
  }
  return a;
}

void test() {
  printf("Позитивный тест\n");
  printf("Площадь квадрата при вводе 5 = 25\n");
  if (area(2, 5.0f) == 25.0f) {
    printf("OK\n");
  } else {
    printf("FAIL\n");
  }
  printf("Радиус круга при вводе 1 = 3.1415\n");
  if (area(1, 1.0f) == 3.1415f) {
    printf("OK\n");
  } else {
    printf("FAIL\n");
  }
  printf("Негативный тест\n");
  printf("При выборе расчета фигуры введено 3\n");
  if (area(3, 1.1f)) {
    printf("OK\n");
  } else {
    printf("FAIL\n");
  }
  printf("Отрицательный радиус -5\n");
  if (area(1, -5.0f)) {
    printf("OK\n");
  } else {
    printf("FAIL\n");
  }
}