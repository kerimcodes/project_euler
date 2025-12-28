#Find the largest palindrome made from the product of two 3-digit numbers

for i in  range(900,1000):
    for j in range(i,1000):
        number = copynumber = copynumber2 = i*j
        pow10 = 1
        newnumber = 0
        while number / pow10 >= 10:
            pow10 *= 10
        while copynumber != 0:
            digit = copynumber % 10
            newnumber += (pow10*digit)
            copynumber //= 10
            pow10 //= 10
        if newnumber == copynumber2:
            print(newnumber)
            