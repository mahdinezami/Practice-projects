#include <stdio.h>
int main() 
{
    int a ;
    int b ;
    printf("please enter 2 number:\n");
    scanf("%d %d",&a,&b);
    int c = a+=b;
    printf("%d", c);
    return 0 ; 
}
