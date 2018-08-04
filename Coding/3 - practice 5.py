# The formula for "Two-for" price is 20% off the total price of two items.
#   Prompt the user for each of the values and calculate the result.

p1 = 0
p2 = 0

while(p1 >=0):
    print('Price 1:')
    p1 = float(input())
    print('Price 2:')
    p2 = float(input())
    tp = (p1 + p2) * 80
    print('Total price is',end=' ')
    print(round((tp/100),2))
