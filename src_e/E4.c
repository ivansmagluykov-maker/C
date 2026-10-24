#include <stdio.h>
#define MAX 10

int main() {
    int index_max = 0;
    int index_min = 0;
    int num[MAX] = {0};
    int num_copy[MAX] = {0};
    
    for(int i = 0; i < MAX; i++) scanf("%i ", &num[i]);
    for(int i = 0; i < MAX; i++) num_copy[i] = num[i];
    
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - 1 - i; j++) {
            if (num[j] > num[j + 1]) {
                int t = num[j];
                num[j] = num[j + 1];
                num[j + 1] = t;
            }
        }
    }

    printf("%i", num[MAX-1] + num[MAX-2]);
    
    return 0;
}