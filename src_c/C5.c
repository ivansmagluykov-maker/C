#include <stdio.h>
#define MAX 20

int sum(int x){
    if(x <= 0) return 0;
    int out = 0;
    for(int i = 1; i <= x; i++){
        out += i;
    }
    return out;
}


int main() {
    
    int num = 0;
    scanf("%i", &num);
    
    printf("%i \n", sum(num));
    
    return 0;
}