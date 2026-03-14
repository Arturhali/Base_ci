#include <stdio.h>

void year(int year);
void test();

int main(int argc, char *argv[]) {
  if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 't' &&
      argv[1][3] == 'e' && argv[1][4] == 's' && argv[1][5] == 't' &&
      argv[1][6] == '\0') {
    test();
    return 0;
  }

  int y;
  printf("Введите год: ");
  if (scanf("%d", &y) != 1) {
    printf("Ошибка: Введите целое число\n");
    return 1;
  } else if (y < 0) {
    printf("Ошибка: Год не может быть отрицательным\n");
    return 1;
  }
  year(y);
  return 0;
}

void year(int r) {

  if ((r % 400 == 0) || (r % 4 == 0 && r % 100 != 0)) {
    printf("Да (високосный)\n");
  } else {
    printf("Нет (обычный)\n");
  }
}

void test() { 
  printf("Позитивный тесты\n");
  printf("Ввод года 1000 - ожидаем (нет)\n");
  year(1000);
  printf("Ввод года 2024 - ожидаем (да)\n");
  year(2024);
  printf("Негативные тесты\n");
  printf("Ввод года 10п5 - ожидаем (ошибку ввода)\n");
  year(10п5);
}