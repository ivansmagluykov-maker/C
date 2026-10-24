#include <stdio.h>
#define LE 20
int main() {

    int num = 0;
    int a = 0;
    int b[LE] = {0};
    int c = 0;
    int d = 0;
    int e = 0;
    
    scanf("%u", &num);
    
    do{
        b[c] = num % 10;
        num /= 10;
        if(num == 0) break;
        else c++;
        
    }while( c < LE);
    
    for(int i = 0; i <= c; i++){
        if(b[i] % 2 > 0) d++;
        else e++;
    }
    
    printf("%u %u \n", e, d);
    
    return 0;
}