#include <stdio.h>
 
int main() {
    
    float num;
    int count = 0;
    float positiveSum = 0;
    float average;
    
    for(int i = 0; i < 6; i++){
        
        scanf("%f", &num);
        
        if(num >= 0){
            count+=1;
            positiveSum = positiveSum + num;
        }
        
    }
	
	average = positiveSum/count;
 	   
    printf("%d valores positivos\n", count);
    printf("%.1f\n", average);
    
    return 0;
}