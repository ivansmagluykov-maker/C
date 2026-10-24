#include <stdio.h>

int power(int a, int b){
    if(b < 0) return 0;
    
    int x = 1;
    for (int i = 0; i < b; i++) {
        x *= a;
    }
    return x;
}

int main() {
   
    
    int num = 0;
    int b = 0;
    
    scanf("%i %i", &num, &b);
    
    printf("%i \n", power(num, b));
    
    return 0;
}