#include <stdio.h>

int casting(int a1, int b1, int c1);
void test();

int main(int argc, char *argv[]) {
  if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 't' &&
      argv[1][3] == 'e' && argv[1][4] == 's' && argv[1][5] == 't' &&
      argv[1][6] == '\0') {
    test();
    return 0;
  }
  int a = 0;
  int b = 0;
  int c = 0;
  printf("Введите три стороны через пробел: ");
  if (scanf("%d %d %d", &a, &b, &c) != 3) {
    printf("Ошибка: Введите целые числа.\n");
    return 1;
  } else if (a <= 0 || b <= 0 || c <= 0) {
    printf("Ошибка: Числа не могу быть отрицательными\n");
    return 1;
  }
  if (casting(a, b, c) == 1){
    return 1;
  }
  return 0;
}

int casting(int a1, int b1, int c1) {
  if (a1 + b1 <= c1 || a1 + c1 <= b1 || b1 + c1 <= a1) {
    printf("Треугольник не существует\n");
    return 1;
  } else if (a1 == b1 && b1 == c1) {
    printf("Равносторонний\n");
  } else if (a1 == b1 || b1 == c1 || a1 == c1) {
    printf("Равнобедренный\n");
  } else {
    printf("Разносторонний\n");
  }
  return 0;
}

void test() {
  printf("Положительные тесты\n");
  printf("Ввод 11 20 30 ожидаем (Разносторонний)\n");
  casting(11, 20, 30);
  printf("Ввод 20 20 30 ожидаем (Равнобедренный)\n");
  casting(20, 20, 30);
  printf("Ввод 11 22 30 ожидаем (Разносторонний)\n");
  casting(11, 22, 30);
}