#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool number(char c);
bool letter(char c);
int choice();
void test();

int main(int args, char *argv[]){

    if(args > 1 && strcmp(argv[1], "--test") == 0){
        test();
    }else{
        choice();
    }
    return 0;
}

bool number(char c){

    return (c >= '0' && c <= '9');
}

bool letter(char c){

    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int choice(){
    
    char i;
    int s;

    printf("Введите один символ: ");
    s = scanf(" %c", &i);

    if (s == 1 && number(i)) {
        printf("Это цифра\n");
    } 
    else if (s == 1 && letter(i)) {
        printf("Это буква\n");
    } 
    else if (s == 1) {
        printf("Это не буква и не цифра\n");
    }
    else {
        printf("Ошибка ввода\n");
    }
    return 0;
}

void test(){
    printf("Позитивный случай цифра 5\n");
    if (number('5')) printf("Это цифра: OK\n");
    else printf("Тест 1: FAIL\n");
    printf("Позитивный случай буква А\n");
    if (letter('A')) printf("Это буква: OK\n");
    else printf("Тест 2: FAIL\n");
    printf("Негативный случай знак !\n");
    if (!number('!') && !letter('!')) printf("Это буква и цифра: OK\n");
    else printf("Тест 3: FAIL\n");
}

