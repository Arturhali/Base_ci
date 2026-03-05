#include <stdio.h>

int main(){
    int a = 5;
    int b = 2;
    
    printf("%d\n", a / b);
    printf("%.1f\n", (float)a / b);
    printf("%.1f\n", a / (float)b);
    printf("%d\n", a % b);
    return 0;
}