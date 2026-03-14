#include <stdio.h>

int even(int n);
void test();

int main(int argc, char *argv[]) {
  if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 't' &&
      argv[1][3] == 'e' && argv[1][4] == 's' && argv[1][5] == 't' &&
      argv[1][6] == '\0') {
    test();
    return 0;
  }
  int num = 0;
  printf("Введите целое число:\n");
  if (scanf("%d", &num) != 1) {
    printf("Ошибка ввода целого числа\n");
    return 1;
  }
  if (even(num) == 1) {
    printf("Число %d четное\n", num);
  } else {
    printf("Число %d нечетное\n", num);
  }
  return 0;
}

int even(int n) {
  int e = n % 2;
  if (e == 0) {
    return 1;
  }
  return 0;
}

void test() {
  printf("Позитивный: число 4 ");
  if (even(4)) {
    printf("OK (четное)\n");
  } else {
    printf("FAIL\n");
  }
  printf("Позитивный: число 7 ");
  if (even(7)) {
    printf("OK (нечетное)\n");
  } else {
    printf("FAIL\n");
  }
}
