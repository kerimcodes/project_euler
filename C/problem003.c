/* What is the largest prime factor of the number 600851475143? */

#include <stdio.h>
int main()
{
    long long number = 600851475143;
    long long i = 2;
    while (number != 1)
    {
        if (number % i == 0)
            number /= i;
        else
            i++;
    }
    printf("%lld", i);

    return 0;
}