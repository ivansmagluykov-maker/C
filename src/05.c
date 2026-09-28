#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    
    scanf("%d %d %d", &a, &b, &c);
    float out = (float)(a+b+c) / 3;
    printf("%.2f \n", out);

    return 0;
}