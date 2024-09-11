#include <stdio.h> 
int main ()
{
    float pi = 3.14;
    int r;
    scanf("%d" , &r);
    float Perimetr = 2 * r * pi ;
    float Area = r * r * pi ;
    printf("Perimetr: %f \nArea:%f", Perimetr , Area);
    return 0 ;
}
