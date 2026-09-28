#include <stdio.h>

int main() {
   
    char str[3];
    int num[3];
    
    int out = 0;
    
    scanf("%s ", &str);
    for(int i = 0; i<3; i++) {
        sscanf(&str[i], "%1d", &num[i]);
        if(num[i] > out) out = num[i];
    }
    printf("%d \n", out);

    return 0;
}