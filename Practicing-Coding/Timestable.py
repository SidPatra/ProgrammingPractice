print('Please enter a number tetween 5 and 15:',end=' ')
n = int(input())
print(n)
if 5 <= n <= 15:
    for j in range(0,n+1):
        print('0',end='')
        for i in range(1,n+1):
            z = i*j
            print('%4s' % z,end='')
        print('')
else:
    print('Please follow the directions!')