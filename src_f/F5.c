#include <stdio.h>
#include <ctype.h>

#define BUFFER 1001

int find_max_array(int size, int a[]){
    int temp = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return a[size - 1];
}

int main() {
    int a[BUFFER] = {15,68,651,325,546,321,35,5,5436,3,35,5};
    
    printf("%d \n", find_max_array(12, a));
    
    return 0;
}