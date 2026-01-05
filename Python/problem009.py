#There exists exactly one Pythagorean triplet for which a+b+c=1000
#Find the product abc

for a in range(100,1000):
    for b in range(a,1000):
        c = 1000-(a+b)
        if a**2 + b**2 == c**2:
            print(f"a: {a} - b: {b} - c: {c}")
            print(f"The product {a*b*c}")