#include <stdio.h>
#define BUF 10

int main() {

    int num = 0;
    
    
    scanf("%u", &num);
    char buffer[50];
    int length = snprintf(buffer, BUF, "%d", num);
    
    if(length ==  3) printf("YES ");    
    else printf("NO");
    
    return 0;
}