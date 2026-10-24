#include <stdio.h>
#define LE  20

int main() {

    int num = 0;
    int a = 0;
    int count = 0;
    
    scanf("%u", &num);
    char buffer[LE] = {0};
    int length = snprintf(buffer, LE, "%d", num);
    
    for (int j = 0; j < length - 1; j++) {
        if (buffer[j] >= buffer[j + 1]) {
            printf("NO \n");
            return 0;
        }
    }
    
    printf("YES \n");
    
    return 0;
}
