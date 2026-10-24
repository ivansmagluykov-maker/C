#include <stdio.h>

int my_abs(int a){
    if(a > 0) return a;
    else return a * -1;
}

int main() {
   
    
    int num = 0;
    
    scanf("%i", &num);
    
    printf("%i \n", my_abs(num));
    
    return 0;
}