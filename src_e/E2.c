#include <stdio.h>
#define MAX 5

int main() {
    int num[MAX] = {0};
    
    for(int i = 0; i < MAX; i++) scanf("%i ", &num[i]);
    
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - 1 - i; j++) {
            if (num[j] > num[j + 1]) {
                int t = num[j];
                num[j] = num[j + 1];
                num[j + 1] = t;
            }
        }
    }
    
    printf("%i", num[0]);
    
    return 0;
}