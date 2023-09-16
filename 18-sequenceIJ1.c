#include <stdio.h>
 
int main() {
    
    int i = 1;
    int j = 60;
    
    //maybe I could've used a do..while instead, but if it works, it works
    printf("I=%d J=%d\n", i, j);
    
    for(int n = 60; n > 0; n-=5){
       if(j % 5 == 0){
           i+=3;
           j-=5;
           printf("I=%d J=%d\n", i, j);
       } 
    }


    return 0;
}