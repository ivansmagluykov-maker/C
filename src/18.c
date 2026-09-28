#include <stdio.h>

int main() {
    
    int num[2];
    
    scanf("%i %i", &num[0], &num[1]);
    
    if(num[0] > num[1]) printf("Above\n");
    else if(num[0] < num[1]) printf("Less\n");
    else printf("Equal\n");

    return 0;
}