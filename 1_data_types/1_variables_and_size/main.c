#include <stdbool.h>
#include <stdio.h>

void var();
void test();

int main(int argc, char *argv[]) {
  if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 't' &&
      argv[1][3] == 'e' && argv[1][4] == 's' && argv[1][5] == 't' &&
      argv[1][6] == '\0') {
    test();
  } else {
    var();
  }
  return 0;
}

void var() {
  int a = 10;
  short b = 15;
  long c = 10000L;
  float d = 8.9f;
  double i = 20.59;
  char f = '!';
  bool g = false;
  printf("int: %d, размер: %zu байт\n", a, sizeof(a));
  printf("short: %hd, размер: %zu байт\n", b, sizeof(b));
  printf("long: %ld, размер: %zu байт\n", c, sizeof(c));
  printf("float: %f, размер: %zu байт\n", d, sizeof(d));
  printf("double: %f, размер: %zu байт\n", i, sizeof(i));
  printf("char: %c, размер: %zu байт\n", f, sizeof(f));
  printf("bool: %d, размер: %zu байт\n", g, sizeof(g));
}

void test() {
  printf("Положительный: char = 1 байт ");
  if (sizeof(char) == 1) {
    printf("OK\n");
  } else {
    printf("FAIL\n");
  }
  printf("Отрицательный: int 10 байт ");
  if (sizeof(int) == 10) {
    printf("OK\n");
  } else {
    printf("FAIL\n");
  }
}