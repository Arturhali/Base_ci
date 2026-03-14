#include <stdio.h>

int choice(char c);
void test();

int main(int argc, char *argv[]) {
  if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 't' &&
      argv[1][3] == 'e' && argv[1][4] == 's' && argv[1][5] == 't' &&
      argv[1][6] == '\0') {
    test();
    return 0;
  }
  printf("Введите один символ:\n");
  char i = 0;
  if (scanf("%c", &i) i > 1) {
    printf("Ошибка ввода\n");
    return 1;
  }
  int r = choice(i);
  if (r == 1) {
    printf("Это цифра\n");
  } else if (r == 2) {
    printf("Это буква\n");
  } else {
    printf("Это не буква и не цифра\n");
  }
  return 0;
}

int choice(char c) {
  int res = 0;
  if (c >= '0' && c <= '9') {
    res = 1;
  } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    res = 2;
  }
  return res;
}

void test() {
  printf("Позитивный случай цифра 5\n");
  if (choice('5')) {
    printf("Это цифра: OK\n");
  } else {
    printf("FAIL\n");
  }
  printf("Позитивный случай: буква А\n");
  if (choice('A')) {
    printf("Это буква: OK\n");
  } else {
    printf("FAIL\n");
  }
  printf("Позитивный случай: Знак !\n");
  if (choice('!')) {
    printf("Это не буква и не цифра");
  } else {
    printf("FAIL\n");
  }
}
