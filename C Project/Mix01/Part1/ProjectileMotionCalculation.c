#include <stdio.h>
int main() 
{
    const float G = 9.8;
    unsigned int t = 4 ;
    float v0 = 2.3 ;
    float x0 = 4.5 ;
    float x;
    x = G * t * t / 2 + v0 * t + x0 ;
    printf(" x = 1/2 * %f * %d * %d + %f * %d + %f = %f ", G ,t , t, v0 , t , x0 , x );
    return 0 ; 
}
