#include <stdio.h>

int main() {

    int x, y;
    float value;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    switch(x){
        case 1:
        value = y*4;
        break;
        
        case 2:
        value = y*4.5;
        break;
        
        case 3:
        value = y*5;
        break;
        
        case 4:
        value = y*2;
        break;
        
        case 5:
        value = y*1.5;
    
    }
    
    printf("Total: R$ %.2f", value);

    return 0;
}