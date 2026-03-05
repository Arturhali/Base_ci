#include <stdio.h>
#include <string.h>

void casting();
void tests();

int main(int argc, char *argv[]){

    if (argc > 1 && strcmp(argv[1], "--test") == 0) {
        tests();
    } else {
        casting();
    }

    return 0;
}

void casting(){
    double pi = 3.14159;
    int pi_int = pi;
    float pi_float = (float)pi;

    printf("%.5f\n%d\n%.5f\n", pi, pi_int, pi_float);
}

void tests(){
    double pi = 3.14159;
    int pi_int;
    
    printf("Позитивный: явное отсечение дробной части ");
    if (pi_int == 3) printf("OK\n"); else printf("FAIL\n");

    printf("Негативный: проверка потери точности ");
    if (pi_int != 4) printf("OK (данные потеряны, округления нет)\n"); 
    else printf("FAIL\n");
}