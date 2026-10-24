#include <stdio.h>
#define LE 20
int main() {

    int num = 0;
    int new_num = 0;
    int count = 0;
    
    
    scanf("%u", &num);
    char buffer[LE] = {0};
    int length = snprintf(buffer, LE, "%d", num);
    
    for (int j = 0; j < length; j++) {
        int a = num % 10;
        num /= 10;
        new_num = new_num * 10 + a;
    }
    
    printf("%u \n", new_num);
    
    return 0;
}