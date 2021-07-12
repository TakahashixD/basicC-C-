#include <stdio.h>

int retorna_soma(int x[]){
    int a = 0;
    for(int i=0; i<20; i++){
        a = a + x[i];
    }
    return a;
}
int main(void){
    int x[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printf("%d", retorna_soma(x));
    
}