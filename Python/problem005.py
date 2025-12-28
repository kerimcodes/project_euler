#What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?7

multiple  = int(1)
for i in range(2,21):
    isPrime= 1
    for j in range(2,int(i**0.5)+1):
        if i % j == 0:
            isPrime = 0
    if isPrime:
        k = 1
        while i**k<20:
            k += 1
        multiple *= i**(k-1)

print(multiple)
            