/* #By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms */

#include <stdio.h>
#include <math.h>

int main()
{   
    long long term1 = 1, term2 = 1,term3 = term1+term2;
    long long sum = 0;
    long long bound = pow(10, 6);
    while (term3 < 4*bound)
    {
        if (term3 %2 == 0)
            sum += term3;
        term1 = term2;
        term2 = term3;
        term3 = term1 + term2;
    }
    printf("%lld", sum);

    return 0;
}   