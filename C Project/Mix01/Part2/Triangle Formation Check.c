#include <stdio.h>
int main() 
{
    int a , b, c;
    printf("please enter 3 number:\n");
    scanf("%d %d %d", &a ,&b ,&c);
    if (a < b+c && b < a+c && c <a+b){
        printf("The numbers can form a triangle.\n");
    }
    else{
        puts("none");
    }
    return 0 ; 
}
