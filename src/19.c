#include <stdio.h>

int main() {
    
    int num[3];
    
    scanf("%i %i %i", &num[0], &num[1] , &num[2]);
    
    for(int i = 0; i < 3; i++){
        if(num[i] <= 0) { printf("NO\n"); return 0;}
    }
    
    if(num[0] >= num[1] + num[2]) printf("NO\n");
    else if(num[1] >= num[0] + num[2]) printf("NO\n");
    else if(num[2] >= num[0] + num[1]) printf("NO\n");
    else printf("YES\n");
    return 0;
}