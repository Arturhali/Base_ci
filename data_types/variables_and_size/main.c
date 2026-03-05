#include <stdio.h>
#include <stdbool.h>

int main(){

int a = 10;

short b = 15;

long c = 10000L;

float d = 8.9f;

double i = 20.59;

char f = '!';

bool g = true;

printf("int: %d, размер: %zu байт\n", a, sizeof(a));

printf("short: %hd, размер: %zu байт\n", b, sizeof(b));

printf("long: %ld, размер: %zu байт\n", c, sizeof(c));

printf("float: %.1f, размер: %zu байт\n", d, sizeof(d));

printf("double: %.2f, размер: %zu байт\n", i, sizeof(i));

printf("char: %c, размер: %zu байт\n", f, sizeof(f));

printf("bool: %d, размер: %zu байт\n", g, sizeof(g));

return 0;

}