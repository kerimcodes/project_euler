/*  Among the first 242 thousand square numbers, what is the sum of all the odd squares? */

#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long i,sum = 0;

    for (i = 1; i < 242 * 10*10*10;i+=2)
    {
        sum += i * i;
    }
    printf("%llu", sum);
    return 0;
}