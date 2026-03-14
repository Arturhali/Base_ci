#include <stdio.h>

int verdict(int a, int s, int d);
void test();

int main(int argc, char *argv[]) {
  if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 't' &&
      argv[1][3] == 'e' && argv[1][4] == 's' && argv[1][5] == 't' &&
      argv[1][6] == '\0') {
    test();
    return 0;
  }
  int q = 0;
  int w = 0;
  int e = 0;
  printf("Введите 3 оценки (от 1 до 5) через пробел: ");
  if (scanf("%d %d %d", &q, &w, &e) != 3) {
    printf("Ошибка: введите 3 целых числа.\n");
    return 1;
  } else if (!(q >= 1 && q <= 5) || !(w >= 1 && w <= 5) ||
             !(e >= 1 && e <= 5)) {
    printf("Ошибка: Введите значение от 1 до 5.\n");
    return 1;
  }
  int x = verdict(q, w, e);

  if (x == 1) {
    printf("Отчислен\n");
  } else if (x == 2) {
    printf("Молодец, хорошист!\n");
  } else if (x == 3) {
    printf("Учись получше, троечник!\n");
  }
  return 0;
}

int verdict(int a, int s, int d) {
  if (a <= 2 || s <= 2 || d <= 2) {
    return 1;
  }
  float v = (float)(a + s + d) / 3;
  if (v >= 4.0f) {
    return 2;
  } else {
    return 3;
  }
}

void test() {
  printf("Позитивный тест (Ждем от функции 1 (отчислен), 2 (хорошист), 3 - "
         "(троечник))\n");
  printf("Входные данные 5, 5, 2: %d\n", verdict(5, 5, 2));
  if (verdict(5, 5, 2) == 1) {
    printf("OK\n");
  } else {
    printf("FAIL\n");
  }
  printf("Входные данные 4, 4, 5: %d\n", verdict(4, 4, 5));
  if (verdict(4, 4, 5) == 2) {
    printf("OK\n");
  } else {
    printf("FAIL\n");
  }
  printf("Входные данные 3, 3, 4: %d\n", verdict(3, 3, 4));
  if (verdict(3, 3, 4) == 3) {
    printf("OK\n");
  } else {
    printf("FAIL\n");
  }
}