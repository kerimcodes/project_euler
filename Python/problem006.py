#Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum

n = 100
sumofsquare = n*(n+1)*(2*n+1)//6
squareofsum = (n*(n+1)//2)**2
print(squareofsum-sumofsquare)