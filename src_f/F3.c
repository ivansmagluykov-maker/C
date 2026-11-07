#include <stdio.h>
#include <ctype.h>

#define BUFFER 1001

int main() {
    char buffer[BUFFER];
    int c;
    int count = 0;
    int CountNum[10] = {0};

    while ((c = getchar()) != '\n' && c != EOF) {
        if (isdigit((unsigned char)c)) {
            if (count < BUFFER - 1) {
                for(int j = 0; j < 10; j++) if((char)c - '0' == j) CountNum[j]++;
                buffer[count++] = (char)c - '0';
            }
        }
    }
    
    for(int i=0; i < 10; i++) {
        if(CountNum[i] != 0) printf("%d %d \n", i, CountNum[i]);
    }
    
    
    return 0;
}