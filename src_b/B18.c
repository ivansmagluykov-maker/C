#include <stdio.h>


void calc(int x){
    if (x <= 0) return;
    static int count = 1;    
    static int temp[2] = {0,0};
    
    int sum = 0;
    
    if(count > x) return;
    
    if(count <= x){
        sum = temp[1] + temp[0];
        if(sum == 0) sum = 1; 
        temp[1] = temp[0];
        temp[0] = sum;
        printf("%d ", sum);
        count++;
        calc(x);
    }
    
};

int main() {
    int x;
    
    scanf("%d", &x);
    
    calc(x);

    return 0;
}