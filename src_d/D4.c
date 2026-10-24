#include <stdio.h>

    void print_num(int n) {
       if(n <= 0) {
           printf("%i ", n);
           return;
       }
       if(n / 10 > 0) print_num( n / 10);
       printf("%i ", n % 10);
       
    }


int main() {
    int num = 0;

    scanf("%i", &num);
    print_num(num);
    
    return 0;
}
