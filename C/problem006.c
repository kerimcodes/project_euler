/* Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum */
#include <stdio.h>
int sumofsquares(int maxnumber)
{
    return maxnumber * (maxnumber + 1) * (2 * maxnumber + 1) / 6;
}
int squareofsum(int maxnumber)
{
    int sum = maxnumber * (maxnumber + 1) / 2;
    return sum * sum;
}
int main()
{
    int result;
    result = squareofsum(100) - sumofsquares(100);
    printf("%d", result);
    return 0;
}