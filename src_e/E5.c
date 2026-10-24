#include <stdio.h>
#define MAX 10

int main() {
    int sum = 0;
    
    int num[MAX] = {0};
    
    
    for(int i = 0; i < MAX; i++) scanf("%i ", &num[i]);
    for(int i = 0; i < MAX; i++) if(num[i] > 0) sum += num[i];

    printf("%i", sum);
    
    return 0;
}