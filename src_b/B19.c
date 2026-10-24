#include <stdio.h>

int main() {
   
    int x, count;

    scanf("%u", &x);
    if(x == 0) {
        printf("NO"); 
        return 0;
    }

    for(;;){
        count += x % 10;
        x /= 10;
        if(x == 0) {
            if(count == 10) printf("YES");
            else  printf("NO");
            break;
        }
    };

    return 0;
}
