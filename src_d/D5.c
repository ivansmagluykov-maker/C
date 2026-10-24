#include <stdio.h>

    void to_bin(int n) {
        if(n <= 0) {
            return;
        }
        to_bin(n / 2);        // Делим на 2 (вместо 10)
        printf("%d", n % 2);       // Остаток от деления на 2 (вместо 10)
       
    }


int main() {
    int num = 0;

    scanf("%i", &num);
    if(num <= 0) printf("%i", num);
    to_bin(num);
    
    return 0;
}