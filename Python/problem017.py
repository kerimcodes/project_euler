# If the numbers  to  are written out in words: one, two, three, four, five, then there are  3+3+5+4+4 =19 letters used in total.

# If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

# NOTE: Do not count spaces or hyphens. For example,  (three hundred and forty-two) contains  letters and  (one hundred and fifteen) contains  letters. 
# The use of "and" when writing out numbers is in compliance with British usage.

ones = ["", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", 
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"]

tens = ["", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"]

sum = 0
for i in range(1,1001):
    if i < 20:
        sum += len(ones[i])
    elif i >= 20 and i<100:
        sum += len(ones[i%10])
        sum += len(tens[i//10])
    elif i >= 100 and i < 1000:
        if i % 100 < 20 and i % 100 != 0:
            sum = sum + len(ones[i//100]) + 10 + len(ones[i%100])
        elif i % 100 == 0:
            sum = sum + 7 + len(ones[i//100])
        else:
            sum = sum + 10 + len(ones[i//100]) + len(ones[i%10]) + len(tens[(i//10)%10])
    else:
        sum += 11
print(sum)