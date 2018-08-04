'''print('Please enter a number between 5 and 15:',end=' ')
n = int(input())
print(n)
if 5 <= n <= 15:
    for j in range(0,n+1):
        for i in range(0,n+1):
            z = i*j
            print('%5s' % z,end='')
        print('')
else:
    print('Please follow the directions!')
a = 1
b = 'warbler'
print(a+b)'''

age = 21
license = False
if (age >= 21) or license:
   print("you may pass", end='-')
else:
   print("no way!")