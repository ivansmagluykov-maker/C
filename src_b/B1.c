#include <stdio.h>

int main() {
    
    int num;
    int num2 = 0;
    int num3 = 0;
    
    scanf("%u ", &num);
    
    if(num > 100 || num <= 0) printf("Bad num \n");
    
    for(int i = 1; i <= num; i++){
        printf("%u %u %u\n", i, (int)pow(i, 2), (int)pow(i, 3));    
    }
    
    return 0;
}
