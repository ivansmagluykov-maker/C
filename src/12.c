#include <stdio.h>

int main() {
   
    char str[3];
    int num = 0;
    int out = 0;
    
    scanf("%s ", &str);
    for(int i = 0; i<3; i++) {
        sscanf(&str[i], "%1d", &num);
        out += num;
    }
    printf("%d \n", out);

    return 0;
}