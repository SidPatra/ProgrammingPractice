#The sum of the angles of a triangle is always 180. Get two angles from the
#   user and display what the final angle must be in order to complete the
#   triangle. (Use integers.)
a1 = 2
a2 = 2
while (178 > a1 > 0) and (178 > a2 > 0):
    print('Angle 1:')
    a1 = int(input())
    if (a1 > 178) or (b1 > 178):
        print('That angle is too big')
    print('Angle 2:')
    a2 = int(input())
    if (a1 > 178) or (b1 > 178):
        print('That angle is too big')
    print('Third angle length is:',end=' ')
    a3 = 180 - (a1 + a2)
    print(a3)
    if (a3 < 1):
        print('This is fucking impossible')
