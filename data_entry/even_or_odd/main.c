#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool even_or_odd(int number);
int even();
void test();

int main(int argc, char *argv[]){

    if (argc > 1 && strcmp(argv[1], "--test") == 0) {
        test();
    } else {
        even();
    }

    return 0;
}

bool even_or_odd (int number){
    return (number % 2 == 0);
}

int even(){

    int num = 0;

    printf ("Введите целое число\n");

    if (scanf ("%d", &num) != 1){
        printf ("FAIL - ошибка ввода целого числа!");
        return 1;
    }

    if(even_or_odd(num)){
        printf("Число %d четное\n", num);
    }else{
        printf("Число %d нечетное\n", num);
    }
    return 0;
}


int test() {

    printf("[TEST] Позитивный: число 4 ");
    if (even_or_odd(4)) printf("OK (четное)\n"); else printf("FAIL\n");

    printf("[TEST] Позитивный: число 7 ");
    if (!even_or_odd(7)) printf("OK (нечетное)\n"); else printf("FAIL\n");

    printf("[TEST] Граничный случай: число 0 ");
    if (even_or_odd(0)) printf("OK (четное)\n"); else printf("FAIL\n");

    printf("[TEST] Позитивный: число -3 ");
    if (!even_or_odd(-3)) printf("OK (нечетное)\n"); else printf("FAIL\n");

}
