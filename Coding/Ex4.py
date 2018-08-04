# 3-4-5 triangle tester
# given 2 legs of a triangle and one hypotenuse is the triangle 3-4-5 within angles of 53-54 degrees and 36-37 degrees.
import math
print('enter side length of triangle')
s1 = float(input())
print('enter side length of triangle')
s2 = float(input())

s3 = (s1**2 + s2**2)**0.5

a = math.asin(s1/s3)
a1 = a*180/math.pi
print(a1)

b = math.asin(s2/s3)
b1 = b*180/math.pi
print(b1)

if ((36 <= a1 <= 37) and (53 <= b1 <= 54)) or ((36 <= b1 <= 37) and (53 <= a1 <= 54)):
    print('this is a 3-4-5 triangle')