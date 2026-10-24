#include <stdio.h>
#define MAX 20

void print_n(int n){
    if(n == 0) return;
    static int i = 1;
    printf("%i ", i);
    i++;
    if(i <= n) print_n(n);
    
    return;
}


int main() {
    
    int num = 0;
    scanf("%i", &num);
    
    print_n(num);
    
    return 0;
}
