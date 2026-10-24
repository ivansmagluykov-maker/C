#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    
    scanf("%u %u", &a, &b);
    
    if(a > b) {
        printf("Bad num \n"); 
        return 0;
    }
    
    for(int i = a; i <= b; i++){
        printf("%u ", (int)pow(i, 2));    
    }
    
    return 0;
}