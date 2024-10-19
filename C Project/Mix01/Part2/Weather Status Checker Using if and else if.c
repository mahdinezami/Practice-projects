#include <stdio.h>

int main() 
{
    int temperature;
    printf("Please enter the current temperature:\n");
    scanf("%d", &temperature);

    if (temperature >= 30) {
        printf("It's a hot day!\n");
    } else if (temperature >= 20) {
        printf("It's a warm day.\n");
    } else if (temperature >= 10) {
        printf("It's a cool day.\n");
    } else {
        printf("It's a cold day!\n");
    }

    puts("Have a great day!");
    return 0;
}
