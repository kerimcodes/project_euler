# Let  d be defined as the sum of proper divisors of  n (numbers less than n which divide evenly into n ).
# If  d(a) = b and d(b)=a  , where a !=b  , then  a and b are an amicable pair and each of  a and b are called amicable numbers.
# valuate the sum of all the amicable numbers under 10000 
def sumofdivisor(number):
    sum = 0
    upperlimit = number//2 +1
    for n in range(1,upperlimit):
        if number % n == 0:
            sum += n
    return sum

sum = 0
for number in range(1,10000):   
    number2 = sumofdivisor(number)
    if number == sumofdivisor(number2) and number2 != number:
        sum += number
print(sum)