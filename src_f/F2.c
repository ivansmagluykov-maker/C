#include <stdio.h>
#include <ctype.h>
#define BUFFER 1000

void sort_even_odd(int size, int *a){
    int even_pos = 0;

    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            int temp_val = a[i];
            for (int j = i; j > even_pos; j--) {
                a[j] = a[j - 1];
            }
            a[even_pos] = temp_val;
            even_pos++;
        }
    }
    
    //for(int i = 0; i < size; i++) printf("%i  ", a[i]);
    return;
}

int main() {
    
    int a[BUFFER] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    //int a[BUFFER] = {1,0,1,0,1};
    
    sort_even_odd(20, a);
    //sort_even_odd(5, a);
    
    return 0;
}