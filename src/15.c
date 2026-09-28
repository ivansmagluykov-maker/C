#include <stdio.h>

int main() {
   
    int x1,y1,x2,y2;
    
    float out_k = 0;
    float out_b = 0;
    
    scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
    
    out_k = (float)(y2-y1)/(float)(x2-x1);
    out_b = (float)y1 - out_k * x1;
    
    printf("%.2f %.2f\n", out_k, out_b);

    return 0;
}