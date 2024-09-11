#include <stdio.h> 
int main ()
{
    char w;
    printf("PLEASE ENTER CAPETAL CHARECTER:");
    scanf("%c" , &w );
    char lower = w + 32 ;
    printf("this is your small charecter:%c\n", lower);
    return 0 ;
}
