#include <stdio.h>

int main() {
    
    int n, x;
    float i1, i2, i3;
    float average;
    
    scanf("%d", &n);
    
    //defining the size of the array
    float sequence[n];
    
    //with this i can determine the number of cases
    for(x = 0; x < n;x++){
        scanf("%f %f %f", &i1, &i2, &i3);
        average = (i1*2 + i2*3 + i3*5)/10;

        //pushing the value to the array
        sequence[x] = average;
    }
    
    //prints out the sequence 
    for(x = 0; x < n; x++){
        printf("%.1f\n", sequence[x]);
    }
    
    return 0;
}