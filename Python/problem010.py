# Find the sum of all the primes below two million

sum = 0
i = 2
isPrime = 1
while (i<2*10**6):
    isPrime = 1
    for j in range (2,int(i**0.5)+1):
        if i % j == 0:
            isPrime = 0
            break
    if isPrime:
        sum += i
    i += 1

print(sum)