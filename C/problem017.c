// If the numbers  to  are written out in words: one, two, three, four, five, then there are  3+3+5+4+4 =19 letters used in total.

// If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

// NOTE: Do not count spaces or hyphens. For example,  (three hundred and forty-two) contains  letters and  (one hundred and fifteen) contains  letters. 
// The use of "and" when writing out numbers is in compliance with British usage.
#include <stdio.h>
#include <string.h>
int main() {
    char ones[20][10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    char tens[10][10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    int sum = 0;
    for (int i = 0; i <= 1000;i++)
    {
        if (i<20)
            sum += strlen(ones[i]);
        else if (i>=20 && i<100)
        {
            sum += strlen(ones[i % 10]);
            sum += strlen(tens[i/10]);
        }
        else if (i>=100 && i<1000)
        {
            if (i % 100 < 20 && i % 100 != 0)
                sum = sum + strlen(ones[i / 100]) + 10 + strlen(ones[i % 100]);
            else if (i % 100 == 0)
                sum = sum + 7 + strlen(ones[i / 100]);
            else
                sum = sum + 10 + strlen(ones[i / 100]) + strlen(ones[i % 10]) + strlen(tens[(i / 10) % 10]);
        }
        else
            sum += 11;
    }
    printf("%d", sum);
    return 0;
}