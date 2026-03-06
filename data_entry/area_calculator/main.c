#include <stdio.h>
#include <string.h>
#include <stdbool.h>

float circle (float r);
float square (float s);
int calc();
void test();


int main(int args, char *argv[]){
    if (args > 1 && strcmp(argv[1], "--test") == 0){
        test();
    }
    else{
        calc();
    }
    
    return 0;
}

float circle (float r){
    float pi = 3.1415;
    return pi * r * r;
}

float square (float s){
    return s * s;
}

int calc(){
    int chois;
    float a;
    printf("Введите 1 для площади круга, 2 для площади квадрата.\n");
    if (scanf("%d", &chois) != 1){
        return 1;
    }
    if(chois == 1){
        printf("Введите радиус: \n");
        scanf("%f", &a);
        printf("%.4f", circle(a));
    }
    else if(chois == 2){
        printf("Введите сторону: \n");
        scanf("%f", &a);
        printf("%.4f", square(a));
    }
    else{
        printf("Неверный выбор\n");
    }
    return 0;
}

void test() {
    printf("Позитивный тест\n");
    printf("Площадь квадрата при вводе 5 = 25\n");
    if(square(5.0f) == 25.0f){
        printf("OK\n"); 
    }else{
        printf("FAIL\n");
    }
    printf("Радиус круга при вводе 1 = 3.1415\n");
    if(circle(1.0f) == 3.1415f){
        printf("OK\n");
    }else{
        printf("FAIL\n");
    }

    printf("Негативный тест\n");
    printf("При выборе расчета фигуры введено 3\n");
    int fake_choice = 3;
    if (fake_choice != 1 && fake_choice != 2){
        printf("OK\n");
    }
}