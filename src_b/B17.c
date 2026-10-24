#include <stdio.h>

void calc(int *count, int x){
    if (*count > x) return;
    
    int Sum = 0;
    int Comp = 1;
    int out = 0;
    int temp = *count;
    
    while(temp > 0) {
            int digit = temp % 10;
            Sum += digit;
            Comp *= digit;
            temp /= 10;
    }
    
    if(Sum == Comp) printf("%d \n", *count);
    (*count)++;
    calc(count, x);
};

int main() {
    int x;
    int count = 10;
    
    scanf("%d", &x);
    
    calc(&count, x);

    return 0;
}