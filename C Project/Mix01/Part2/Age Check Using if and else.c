#include <stdio.h>

int main() 
{
    int age;
    printf("please enter your age:\n");
    scanf("%d", &age);
    if (age >= 18) {
        printf("your age is legal\n");
    } else {
        printf("You are not of legal age\n");
    }
    puts("finish program.");
    return 0; 
}
