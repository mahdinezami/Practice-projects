#include <stdio.h> 
int main ()
{
    float pi = 3.14;
    int r;
    scanf("%d" , &r);
    int Perimetr = 2 * r * pi ;
    int Area = r * r * pi ;
    printf("Perimetr: %d, Area:%d", Perimetr , Area);
    return 0 ;
}
