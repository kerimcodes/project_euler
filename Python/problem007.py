# What is the 10 001st prime number?

i = 1
prime = 1

while i<=10001:
    prime += 1
    isPrime = 1
    for j in range(2,int(prime**0.5)+1):
        if prime % j == 0 :
            isPrime = 0
            break
    if isPrime:
        i +=1
print(prime)