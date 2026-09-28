#include <stdio.h>

int main() {
    int a[6] = {0,0,0,0,0,0};

    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    a[5] = a[0];
    for(int i = 0;i < 6-1; i++){
        if(a[5] > a[i]) a[5] = a[i];
    }
    
    printf("%d\n", a[5]);

    return 0;
}