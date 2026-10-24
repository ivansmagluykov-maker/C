#include <stdio.h>

int main() {
   
    int x,y;
    int z;
    
    
    scanf("%u %u i", &x, &y);
    
    if(y > x) z = x, x = y, y = z;
    if(y == 0) return 0;


    while(1){
    z = x % y;
    if(z == 0) {
        printf("%u \n", y);
        return 0;
    }
    x = y;
    y = z;
        
    };
    
    
    printf("%u \n", z);

    return 0;
}