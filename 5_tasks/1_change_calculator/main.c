#include <stdio.h>

int calculate_change(double price, double cash);

int main() {
  double price = 0;
  double cash = 0;
  printf("Введите цену и внесенную сумму: ");
  if (scanf("%lf %lf", &price, &cash) != 2) {
    printf("Ошибка ввода\n");
    return 1;
  }
  if (calculate_change(price, cash) == 1){
    return 1;
  }
    return 0;
}

int calculate_change(double p, double c) {
  double diff = c - p;
  if (diff < 0) {
    printf("Недостаточно средств. Нужно еще %.2f\n", -diff);
    return 1;
  }
  printf("Сдача: %.2f\n", diff);
  int cents = (int)(diff * 100 + 0.5);
  int count;
  count = cents / 500000;
  if (count > 0) {
    printf("5000р: %d шт.\n", count);
    cents %= 500000; 
  }
  count = cents / 100000;
  if (count > 0) {
    printf("1000р: %d шт.\n", count);
    cents %= 100000;
  }
  count = cents / 50000;
  if (count > 0) {
    printf("500р: %d шт.\n", count);
    cents %= 50000;
  }
  count = cents / 10000;
  if (count > 0) {
    printf("100р: %d шт.\n", count);
    cents %= 10000;
  }
  count = cents / 5000;
  if (count > 0) {
    printf("50р: %d шт.\n", count);
    cents %= 5000;
  }
  count = cents / 1000;
  if (count > 0) {
    printf("10р: %d шт.\n", count);
    cents %= 1000;
  }
  count = cents / 500;
  if (count > 0) {
    printf("5р: %d шт.\n", count);
    cents %= 500;
  }
  count = cents / 200;
  if (count > 0) {
    printf("2р: %d шт.\n", count);
    cents %= 200;
  }
  count = cents / 100;
  if (count > 0) {
    printf("1р: %d шт.\n", count);
    cents %= 100;
  }
  count = cents / 50;
  if (count > 0) {
    printf("50к: %d шт.\n", count);
    cents %= 50;
  }
  count = cents / 10;
  if (count > 0) {
    printf("10к: %d шт.\n", count);
    cents %= 10;
  }
  if (cents > 0) {
    printf("1к: %d шт.\n", cents);
  }
  return 0;
}