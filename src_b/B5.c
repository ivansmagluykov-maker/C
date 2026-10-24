#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    
    scanf("%u ", &a);
    
    if(a < 0) {
        printf("Bad num \n"); 
        return 0;
    }
    
    do{
        b += a % 10;
        a /= 10;
    }while(a > 0);
    printf("%u ", b);    
    
    return 0;
}