/* What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?7 */
#include <stdio.h>
int main()
{
    int i,j;
    int product = 1;
    for (i = 2; i <= 20;i++)
    {
        int isPrime = 1;
        for (j = 2; j < i;j++)
        {
            if (i%j==0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            int maxpowerofprime = 1;
            while (maxpowerofprime*i < 20)
                maxpowerofprime *= i;
            product *= maxpowerofprime;
        }   
    }
    printf("%d", product);
    return 0;
}