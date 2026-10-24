void sort_even_odd(int size, int *a){
    int t = 0;
    
    for(int j = 0; j < size-1; j++) {
        
        for(int i = 0; i < size-1;) {
            if(a[i] % 2 == 0){
                i++;
            }
            else{
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
                i++;
            }
        }
    }
    //for(int i = 0; i < size; i++) printf("%i  ", a[i]);
    return;
}

