# What is the largest prime factor of the number 600851475143?

number = 600851475143
i = 2

# Loop until i is greater than the square root of the remaining number
while number != 1:
    if number % i != 0:
        i += 1
    else:
        # If divisible, divide the number by i
        # This effectively "removes" the factor
        number //= i

# Whatever is left is the largest prime factor
print(f"The largest prime factor is: {i}")
        




   

