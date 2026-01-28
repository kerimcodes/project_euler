# Find the sum of the digits in the number 100!
def factoriel(number):
    product = 1
    for i in range(1,number+1):
        product *= i
    return product
def sumDigits(number):
    sum = 0
    while number != 0:
        sum += number %10
        number //= 10
    return sum

sum = sumDigits(factoriel(100))
print(sum)

