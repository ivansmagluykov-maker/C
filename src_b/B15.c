#include <stdio.h>
#define LE 1024
int main() {

    int a = 0;
    int b = 0;
    
    
    for(;;){
        scanf("%u", &b);
        if(b == 0) break;
        if(b%2 == 0) a++;
    }
    
    printf("%u \n", a);
    
    return 0;
}