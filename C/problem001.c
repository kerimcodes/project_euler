/* Find the sum of all the multiples of 3 or 5 1000 below */

#include <stdio.h>
int sumofmultiple(int multinumber,int maxnumber)
{
    int n = (maxnumber-1) / multinumber;
    return n * (n + 1) / 2 * multinumber;
}
int main()
{
    int sum = sumofmultiple(3, 1000) + sumofmultiple(5, 1000) - sumofmultiple(15, 1000);
    printf("%d", sum);
    return 0;
}