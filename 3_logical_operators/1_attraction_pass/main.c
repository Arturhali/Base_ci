#include <stdio.h>

int pass(int h, int a);
void test();

int main(int argc, char *argv[]) {
  if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 't' &&
      argv[1][3] == 'e' && argv[1][4] == 's' && argv[1][5] == 't' &&
      argv[1][6] == '\0') {
    test();
    return 0;
  }
  int height = 0;
  int age = 0;
  printf("Введите рост и возраст через пробел:\n");
  if (scanf("%d %d", &height, &age) != 2) {
    printf("Ошибка ввода, введите целые числа.\n");
    return 1;
  }
  if (pass(height, age) == 1) {
    printf("Можно\n");
  } else {
    printf("Нельзя\n");
  }
  return 0;
}

int pass(int h, int a) {
  if ((h >= 150 && h <= 180) && (a >= 12 && a <= 60)) {
    return 1;
  }
  return 0;
}

void test() {
  printf("Позитивный случай - рост 200 возраст 45\n");
  if (pass(200, 45)) {
    printf("OK\n");
  } else {
    printf("FAIL\n");
  }
  printf("Позитивный случай - рост 130 возраст 30\n");
  if (!pass(130, 30)) {
    printf("OK\n");
  } else {
    printf("FAIL\n");
  }
}