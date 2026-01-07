/* Find the sum of all the primes below two million */
#include <stdio.h>
#include <math.h>
int isPrime(int number)
{
    int i;
    for (i = 2; i*i <= number;i++)
    {
        if (number % i == 0)
            return 0;
    }
    return 1;
}
long long sumofprimes(long long uppernumber)
{
    long long sum = 0;
    long long i;
    for (i = 2; i < uppernumber;i++)
    {
        if (isPrime(i))
            sum += i;
    }
    return sum;
}
int main()
{
    long long sum = sumofprimes(2 * pow(10, 6));
    printf("%lld",sum);
    return 0;
}