#include <stdio.h> 
int main ()
{
    char t;
    puts("Enter a charecter:");
    t = getchar();
    printf("%c %d %c" , t, t, t + 2);
    return 0 ;
}
