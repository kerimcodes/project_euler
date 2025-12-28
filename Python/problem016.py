# What is the sum of the digits of the number 2**1000?

def pow(base:int,power:int):
    return base**power

def powerdigitsum(base,power):
    number = pow(base,power)
    print(number)
    sum = 0
    while number > 0:
        sum += number % 10
        number = number//10
    print(sum)

powerdigitsum(2,1000)  