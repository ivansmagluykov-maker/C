#include <stdio.h>
#define MAX 20

int f(int x){
    if(-2 <= x && x < 2) return x*x;
    if(x >= 2) return x*x+4*x+5;
    if(x < -2) return 4;
}

int sort(int *data, int len){
    if(len <= 0) return 0;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    //for(int i = 0;i < len; i++) printf("%i   %i \n", data[i], 5);
    return data[len-1];
}

int main() {
    
    int num = 0;
    int data[MAX] = {};
    int b = 0;
    for(;;){
        scanf("%i", &num);
        if(num == 0) break;
        data[b] = f(num);
        b++;
    }
    //for(int i = 0;i < b; i++) printf("%i %i \n", data[i], b);
    printf("%i \n", sort(data, b));
    
    return 0;
}