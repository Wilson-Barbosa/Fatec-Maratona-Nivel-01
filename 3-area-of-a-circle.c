#include <stdio.h>
 
int main() {
    
    double n = 3.14159;
    double r;
    double a;
    
    scanf("%lf", &r);
    
    a = n*r*r;
    
    printf("A=%.4lf\n", a);
 
    return 0;
}