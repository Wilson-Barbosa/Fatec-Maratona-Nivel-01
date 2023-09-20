#include <stdio.h>

int main() {

    int i;
    int j = 8;
    
    for(i = 1; i < 10; i+=2){
        
        for(int n = 0; n < 3; n++){
            j-=1;
            printf("I=%d J=%d\n", i, j);
        }
        j+=3;
        
    }

    return 0;
}