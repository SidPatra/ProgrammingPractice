# make a diamond
#   *
#  * *
# *   *
#  * *
#   *

n = int(input())
for y in range(n):
    for x in range (n):
        if (y == 0):
            print('*',end='')
        elif (y == n-1):
            print('*',end='')
        elif (x<0) and (x>n-1) and (x != n/2):
            print('_',end='')
        else:
            print('*',end='')
    print()
