#include <stdio.h>
#include <math.h>

int main() {
   
    int x;

    scanf("%u", &x);

    if (x <= 1 || x % 5 == 0) {
        printf("NO");
        return 0;
    }
    
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            printf("NO");
            return 0;
        }
    }
    
    printf("YES");
    return 0;
}