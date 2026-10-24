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
    
    //for(int i = 0; i < MAX; i++) printf("%i ", num[i]);
    //printf("\n");
    
    for(int i = 0; i < MAX; i++) {
        if(num[MAX-1] == num_copy[i] && index_max == 0) index_max = i + 1;
        if(num[0] == num_copy[i] && index_min == 0) index_min = i + 1;
    }
    
    //printf("MAX %i \n", num[MAX-1]);
    //printf("MIN %i \n", num[0]);
    //printf("index MAX %i \n", index_max);
    //printf("index MIN %i \n", index_min);
    
    printf("\n %i %i %i %i",index_max, num[MAX-1], index_min, num[0]);
    
    return 0;
}
