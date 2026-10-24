#include <stdio.h>
#define MAX 20

int main() {
    
    int num = 0;
    int len = 0;
    int num_m[MAX] = {};
    for(int i = 0; i < MAX; i++) num_m[i] = -1;

    scanf("%i", &num);
    
    for(;;){
        num_m[len] = num % 10;
        num /= 10;
        if(num == 0) break;
        len++;
    }
    
    for(int i = 0; i <= len; i++) printf("%i ", num_m[i]);
    
    return 0;
}