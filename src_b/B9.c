#include <stdio.h>

int main() {

    int num = 0;
    int a = 0;
    int count = 0;
    
    scanf("%u", &num);
    char buffer[10] = {0};
    int length = snprintf(buffer, 10, "%d", num);
    
    
    
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
     
            if (buffer[j] < buffer[j + 1]) {
                a = buffer[j];
                buffer[j] = buffer[j + 1];
                buffer[j + 1] = a;
            }
        }
    }
    
    for(int i = 0; i < length; i++ ){
        if((buffer[i]- 30) % 2 != 0) count++;
    }
    if(count > 0) printf("NO \n");
    else printf("YES \n");
    
    return 0;
}