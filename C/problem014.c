/*  The following iterative sequence is defined for the set of positive integers:

 𝑛 →𝑛/2 (𝑛 is even)
 𝑛 →3⁢𝑛 +1 (𝑛 is odd)
 Using the rule above and starting with 13, we generate the following sequence:
 13→40→20→10→5→16→8→4→2→1.

 It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

 Which starting number, under one million, produces the longest chain?

 Note:  Once the chain starts the terms are allowed to go above one million */


#include <stdio.h>
#define LIMIT 1000000

int cache[LIMIT] = {0};

int main() 
{
    long long max_len = 0;
    int best_num = 0;

    for (int i = 2; i < LIMIT; i++) 
    {
        long long n = i;
        int length = 0;

        while (n >= i) 
        { 
            if (n % 2 == 0) n /= 2;
            else n = 3 * n + 1;
            length++;
        }
        
        int current_total = length + cache[n]; 
        cache[i] = current_total;

        if (current_total > max_len) 
        {
            max_len = current_total;
            best_num = i;
        }
    }

    printf("%lld",best_num);
    return 0;
}