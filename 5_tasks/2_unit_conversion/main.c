#include <stdio.h>

void celsius_to_fahrenheit(float c);
void test();

int main(int argc, char *argv[]) {
  if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 't' &&
      argv[1][3] == 'e' && argv[1][4] == 's' && argv[1][5] == 't' &&
      argv[1][6] == '\0') {
    test();
    return 0;
  }
  float celsius = 0;
  printf("Введите температуру в Цельсиях: ");
  if (scanf("%f", &celsius) != 1) {
    printf("Ошибка ввода\n");
    return 1;
  }
  celsius_to_fahrenheit(celsius);
  return 0;
}

void celsius_to_fahrenheit(float c) {
  float fahrenheit = c * 9.0f / 5.0f + 32;
  printf("%.1f°C = %.1f°F\n", c, fahrenheit);
}

void test() {
  printf("Ввод 0 - ожидаем 32.0F: \n");
  celsius_to_fahrenheit(0);
  printf("Ввод 100 - ожидаем 212.0F: \n");
  celsius_to_fahrenheit(100);
  printf("Ввод -40 - ожидаем -40.0F: \n");
  celsius_to_fahrenheit(-40);
}