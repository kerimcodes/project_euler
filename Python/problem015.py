# Starting in the top left corner of a 2x2  grid, and only being able to move to the right and down,
# there are exactly  routes to the bottom right corner.
# How many such routes are there through a 20x20  grid?

def factoriel(number):
    product = 1
    for i in range(1,number+1):
        product*=i
    return product

result = factoriel(40)//(factoriel(20) * factoriel(20))
print(result)