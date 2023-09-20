#include <stdio.h>

int main() {
    
    int x, y;
    int count = 0;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    if(y >= x) {
        for(int i = x+1; i < y; i++){
            if(i % 2 != 0){
                count+=i;
            }
        }
    } else {
        for(int i = y+1; i < x; i++){
            if(i % 2 != 0){
                count+=i;
            }
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}