#By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
# find the sum of the even-valued terms

n1 = n2 = 1
n3 = 0
sum = 0
while True:
    n3 = n1 + n2
    if n3 < 4*10**6:
        if n3 % 2 == 0:
            sum += n3
        n1 = n2
        n2 = n3
        n3 = 0
    else:
        break

print(sum)
