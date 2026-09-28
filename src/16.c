#include <stdio.h>

int main() {
    
    int str[3];
    
    scanf("%i %i %i", &str[0], &str[1], &str[2]);
    if(str[0] < str[1] && str[1] < str[2]) printf("YES \n");
    else printf("NO \n");

    return 0;
}