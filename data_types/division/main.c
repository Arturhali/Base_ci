#include <stdio.h>
#include <string.h>

int dev();
void test();

int main(int argc, char *argv[]) {
    if (argc > 1 && strcmp(argv[1], "--test") == 0) {
        test();
    } else {
        dev();
    }
    return 0;
}

int dev(){
    int a = 5;
    int b = 2;
    if (b == 0){
        printf("Глупец... делить на ноль нельзя!!!\n");
        return 1;
    }
    printf("%d\n", a / b);
    printf("%.1f\n", (float)a / b);
    printf("%.1f\n", a / (float)b);
    printf("%d\n", a % b);
    return 0;
}

void test() {
    int a = 5;
    int b = 2;
    printf("Позитивный: 5 / 2 = 2 ");
    if (a / b == 2) printf("OK\n"); 
    else printf("FAIL\n");

    printf("Негативный: 5 / 2 = 2.5 ");
    if ((float)(a / b) != 2.5) printf("OK\n"); 
    else printf("FAIL\n");
}