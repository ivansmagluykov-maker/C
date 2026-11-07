#include <stdio.h>
#include <ctype.h>

#define BUFFER 1001

void print_digit(char s[]){
    
    //int count = 0;
    int CountNum[10] = {0};
    int i = 0;
    
    while (s[i] != 0) {
            //printf("%d %c \n", i, s[i]);
            
        if (isdigit((unsigned char)s[i])) {
            //printf("%d %c \n", i, s[i]);
             
            for(int j = 0; j < 10; j++) if(s[i] - '0' == j) CountNum[j]++;
            
        }
        i++;
    }
    
    for(int i=0; i < 10; i++) {
        if(CountNum[i] != 0) printf("%d %d \n", i, CountNum[i]);
    }
}

int main() {
    
    char a[BUFFER] = {"Hello123 world77"};
    
    print_digit(a);
    
    return 0;
}