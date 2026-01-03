/* Find the largest palindrome made from the product of two 3-digit numbers */
#include <stdio.h>
int main()
{
    int i,j;
    int max_palindrome = 0;
    for (i = 900; i < 1000;i++)
    {
        for (j = i; j < 1000;j++)
        {
            int product_number, copynumber;
            product_number = copynumber = i * j;
            int newnumber = 0;
            while (product_number > 0)
            {
                int lastdigit = product_number % 10;
                newnumber = newnumber * 10 + lastdigit;
                product_number /= 10;
            }
            if (newnumber == copynumber && newnumber > max_palindrome)
                max_palindrome = newnumber;
        }
    }
    printf("%d", max_palindrome);
    return 0;
}