n = 0
while n <= 21:
    print('Please enter a number between 1 and 11: ',end='')
    c = int(input())
    print(c)
    if c <=11:
        n = n + c
    else:
        print('Out of range; rejected.')
        break
    if n > 21:
        print('The total is',n)
        break