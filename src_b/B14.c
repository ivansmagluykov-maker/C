#include <stdio.h>
#define LE 1024
int main() {

    int a = 0;
    int b = 0;
    
    
    for(a = 0;;a++){
        scanf("%u", &b);
        if(b == 0) break;
    }
    
    printf("%u \n", a);
    
    return 0;
}