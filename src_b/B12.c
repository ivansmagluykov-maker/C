#include <stdio.h>
#define LE 20
int main() {

    int num = 0;
    int min = '9';
    int max = '0';
    
    
    scanf("%u", &num);
    char buffer[LE] = {0};
    int length = snprintf(buffer, LE, "%d", num);
    
    for (int j = 0; j < length; j++) {
        if(min > buffer[j]) min = buffer[j];
        if(max < buffer[j]) max = buffer[j];
    }
    
    printf("%c %c \n", min, max);
    
    return 0;
}