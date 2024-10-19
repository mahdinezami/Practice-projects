#include <stdio.h>
int main()
{
    int n;
    puts("please enter n :");
    scanf("%d" ,&n);
    int counter = 0;
    while (counter < n)
    {
        printf(" %d ", ++counter);
    }
    return  (0);

}
