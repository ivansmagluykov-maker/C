#include <stdio.h>
#define MAX 5

int main() {
    int num[MAX] = {0};
    float out = 0.0f;

    for(int i = 0; i < MAX; i++) scanf("%i ", &num[i]);
    for(int i = 0; i < MAX; i++) out += num[i];
    
    printf("%0.3f", out / MAX);
    
    return 0;
}