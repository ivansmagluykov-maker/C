#include <stdio.h>
#include <ctype.h>

#define BUFFER 1001

int is_two_same(int size, int a[]){
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(a[i] == a[j] && i != j) return 1;
        }
    }
 return 0;    
}

int main() {
    
    int a[BUFFER] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    
    printf("%d", is_two_same(13, a));
    
    return 0;
}
