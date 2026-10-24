#include <stdio.h>

int middle(int a, int b){
    return (a + b) / 2;
}

int main() {
   
    
    int num = 0;
    int b = 0;
    
    scanf("%i %i", &num, &b);
    
    printf("%i \n", middle(num, b));
    
    return 0;
}