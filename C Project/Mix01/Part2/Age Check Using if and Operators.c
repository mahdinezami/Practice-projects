#include <stdio.h>
int main() 
{
    int age ;
    printf("please enter your age:\n");
    scanf("%d",&age);
    if (age >= 18){
        printf("your age is legal\n");}
    if(age <= 17)
        {
            printf("You are not of legal age");
        }
    puts("finnish program.")
    return 0 ; 
}
