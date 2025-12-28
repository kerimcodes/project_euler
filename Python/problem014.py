# The following iterative sequence is defined for the set of positive integers:

# 𝑛 →𝑛/2 (𝑛 is even)
# 𝑛 →3⁢𝑛 +1 (𝑛 is odd)
# Using the rule above and starting with 13, we generate the following sequence:
# 13→40→20→10→5→16→8→4→2→1.

# It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

# Which starting number, under one million, produces the longest chain?

# Note:  Once the chain starts the terms are allowed to go above one million 

max = 0
list = []
for i in range(1,10**6+1):
    process_number = 0
    using_number = i
    while (using_number != 1):
        if using_number % 2 == 0:
            using_number /= 2
            process_number +=1
        else:
            using_number = 3*using_number +1
            process_number += 1
    if process_number > max:
        max = process_number
        list.append(i)
print(list[-1])


