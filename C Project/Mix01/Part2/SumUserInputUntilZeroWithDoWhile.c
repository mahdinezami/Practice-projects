#include <stdio.h>
int main()
{
    int sum = 0;
    int num;
    puts("please enter number! if you see result sum enter 0");
    
    do {
        scanf("%d" ,&num);
        sum+=num;
    }
    while (num != 0);
    printf("this is your sum result :%d", sum);
    return  (0);

}
