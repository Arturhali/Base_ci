#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool pass(int height, int age);
void att_pass();
void test();

int main(int args, char *argv[]){
    
    if(args > 1 && strcmp(argv[1], "--test") == 0){
        test();
    }else{
        att_pass();
    }
    return 0;
}

bool pass(int height, int age) {
    return (height >= 150 && height <= 210) && (age >= 12 && age <= 60);
}

void att_pass(){
    int h = 0;
    int a = 0;
    int status = 0;

    printf("Введите рост и возраст через пробел:\n");

    status = scanf("%d %d", &h, &a);

    if (status == 2 && pass(h, a)) {
        printf("Можно\n");
    } 
    else if (status == 2) {
        printf("Нельзя\n");
    } 
    else {
        printf("Ошибка ввода\n");
    }
}

void test() {

    printf("Позитивный случай - рост 200 возраст 45\n");

    if (pass(200, 45)) printf("OK\n");
    
    printf("Негативный случай - рост 130 возраст 30\n");

    if (!pass(130, 30)) printf("OK\n");
    
    printf("Негативный случай - рост 170 возраст 86\n");

    if (!pass(170, 86)) printf("OK\n");
    
}