#include <stdio.h>

#define MAX 30

int main() {
   
    char text[MAX] = {};
    int count = 0;

    for(;;){
        if (count >= MAX - 1) break;
        scanf("%c", &text[count]);
        if (text[count] >= 'A' && text[count] <= 'Z') {text[count] += 32;}
        if( text[count] == '.') {
            text[count] = '\0';
            break;
        }
        count++;
    }
    
    printf("%s \n", text);
    
    return 0;
}