#include <stdio.h>
#define LN 50

int main() {

    int num = 0;
    int a = 0;
    
    scanf("%u", &num);
    char buffer[LN] = {0};
    int length = snprintf(buffer, LN, "%d", num);
    
    
    
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
     
            if (buffer[j] < buffer[j + 1]) {
                a = buffer[j];
                buffer[j] = buffer[j + 1];
                buffer[j + 1] = a;
            }
        }
    }
    
    for(int i = 1; i < length; i++ ){
        if(buffer[i] == buffer[i - 1]) {
            printf("YES \n");
            return 0;
        }
    }
    printf("NO \n");
    
    return 0;
}