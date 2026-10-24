#include <stdio.h>
#define MAX 20

int getSum(int n){
    if(n == 0) return 0;
    static int i = 1;
    static int b = 0;
    b +=i;
    i++;
    if(i <= n) getSum(n);
    
    return b;
}


int main() {
    
    int num = 0;
    scanf("%i", &num);
    
    printf("%i \n", getSum(num));
    
    return 0;
}