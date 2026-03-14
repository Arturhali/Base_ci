#include <stdio.h>

int div(int a, int b);
void test();

int main(int argc, char *argv[]) {

  int e = 5;
  int q = 2;

  if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 't' &&
      argv[1][3] == 'e' && argv[1][4] == 's' && argv[1][5] == 't' &&
      argv[1][6] == '\0') {
    test();
  } else {
    int g = div(e, q);
    if (g == 1) {
      return 1;
    }
  }
  return 0;
}

int div(int a, int b) {

  if (b == 0) {
    printf("Глупец... делить на ноль нельзя!!!\n");
    return 1;
  }
  int q = a / b;
  float w = (float)a / b;
  float e = a / (float)b;
  int r = a % b;

  printf("Деление целых чисел: %d\n", q);
  printf("Деление (a как вещественное число): %.1f\n", w);
  printf("Деление (b как вещественное число):  %.1f\n", e);
  printf("Деление с остатком: %d\n", r);

  return 0;
}

void test() {

  printf("Позитивный: 5 / 2 = 2\n");

  if (div(5, 2) == 0) {
    printf("OK\n");

  } else {
    printf("FAIL\n");
  }

  printf("Негативный: 10 / 0 = 0\n");

  if (div(10, 0) == 1) {
    printf("OK\n");

  } else {
    printf("FAIL\n");
  }
}