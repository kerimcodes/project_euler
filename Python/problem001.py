# Find the sum of all the multiples of 3 or 5 1000 below 

def total(multi_number:int,last_number:int):

    n = (last_number-1)//multi_number

    return multi_number*n*(n+1)/2


    
result = total(3,1000) + total(5,1000) - total(15,1000)
print(result)