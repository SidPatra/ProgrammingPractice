# Base 10 to Base 2
# algorithm
#  j
#  SUM bi * 2**i
#  i=0
# 1. Determine bj by finding the greatest power of 2 less than or equal to decimal
# 2. find the next bi set into 1 by finding (bj+bi) <= decimal
# 3. Repeat 2 until you sum is equal to decimal



print('base 10 number:')
b10 = int(input()) # base10 number
f = b10
d = 1 # 2**eth power
e = 0 # the power to the 2
list = [0,0,0,0,0,0,0,0,0] # for the results of each loop
g = 0 # adds up all numbers
while(f != 0):
    while d <= b10-g:
        e += 1
        d = 2**e
    else:
        e = e-1
        d = 2**e
        g += d
        f = b10 - g
        list[e] = 1
        d = 1
        e = 0

z = list[::-1]
print('to converted into base 2')
print(z)
