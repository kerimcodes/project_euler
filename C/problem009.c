/* There exists exactly one Pythagorean triplet for which a+b+c=1000
   Find the product abc */
#include <stdio.h>
int main()
{
    int a, b;
    for (a = 100; a < 1000;a++)
    {
        for (b = a; b < 1000;b++)
        {
            int c = 1000 - (a + b);
            if (a*a + b*b == c*c)
            {
                printf("a = %d,b = %d, c = %d\n", a, b, c);
                printf("%d", a * b * c);
            }
        }
    }
    return 0;
}