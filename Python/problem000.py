# Among the first 242 thousand square numbers, what is the sum of all the odd squares?
total = 0
number = 1
while number < 242*(10**3):
    
    total += number**2 
    number += 2

print(total)


