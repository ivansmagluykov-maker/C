#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    int c = 0;
    
    scanf("%u ", &a);
    
    if(a <= 0) {
        printf("NO \n");
        return 0;
    }
    
    do{
        c = b;
        b = a % 10;
        a /= 10;
        if(c == b) {
            printf("YES \n");    
            return 0;
        }
    }while(a > 0);
    
    printf("NO \n");    
    
    return 0;
}