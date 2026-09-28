#include <stdio.h>

int main() {
    int a = 9;
    int b = 8;

    scanf("%d %d %d", &a, &b);
    if(a < b) printf("%d %d\n", a, b);
    else printf("%d %d\n", b, a);

    return 0;
}