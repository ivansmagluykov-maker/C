//#include <stdio.h>
//#define MAX 10

void sort_array(int size, int *a){
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    //for(int i = 0; i < MAX; i++) printf("%i ", a[i]);
    return;
}

/*
int main() {

    int num[MAX] = {0,5,78,23,56,6,2,6,43,2};
    
    sort_array(MAX, num);
    
    //for(int i = 0; i < MAX; i++) scanf("%i ", &num[i]);
    //for(int i = 0; i < MAX; i++) if(num[i] > 0) sum += num[i];

    //printf("%i", sum);
    
    return 0;
}
*/