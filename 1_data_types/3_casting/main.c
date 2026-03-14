#include <stdio.h>

void casting();
void test();

int main(int argc, char *argv[]) {
  if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 't' &&
      argv[1][3] == 'e' && argv[1][4] == 's' && argv[1][5] == 't' &&
      argv[1][6] == '\0') {
    test();
  } else {
    casting();
  }
  return 0;
}

void casting() {
  double pi = 3.14159;
  int pi_int = pi;
  float pi_float = (float)pi;
  printf("Вещественное число: %.5f\n\n", pi);
  printf("Не явное привидение: %d\n", pi_int);
  printf("Явное привидение %.5f\n", pi_float);
}

void test() {
  double pi = 3.14159;
  int pi_int = pi;
  printf("Позитивный: явное отсечение дробной части ");
  if (pi_int == 3) {
    printf("OK\n");
  } else {
    printf("FAIL\n");
  }
  printf("Негативный: проверка потери точности ");
  if (pi_int != 4) {
    printf("OK (данные потеряны, округления нет)\n");
  } else {
    printf("FAIL\n");
  }
}