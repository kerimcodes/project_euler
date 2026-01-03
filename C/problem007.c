/* What is the 10 001st prime number? */
#include <stdio.h>
int main()
{
    long long nth_prime = 0;
    long long i=1, j;
    while (nth_prime <10001)
    {   
        i++;
        int isPrime = 1;
        for (j = 2; j * j <= i;j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            nth_prime++;
    }
    printf("%lld",i);
    return 0;
}