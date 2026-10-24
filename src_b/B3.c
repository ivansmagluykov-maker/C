#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    int sum = 0;
    
    scanf("%u %u", &a, &b);
    
    if(a > b) {
        printf("Bad num \n"); 
        return 0;
    }
    
    for(int i = a; i <= b; i++){
        sum += (int)pow(i, 2);
    }
    printf("%u ", sum);    
    
    return 0;
}