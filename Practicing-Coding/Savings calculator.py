#calculate # of payments that'll be needed
# present info to user
# balance is per week

''' When you have time, program this in the hard way '''


def simcalc(pay,bal):
    weeks = 0
    weeks = pay/bal
    if weeks < 52:
        print(weeks,'weeks.')
    else:
        w1 = int(weeks / 52)
        w2 = int(weeks - (w1*52))
        print(w1,'years and',w2,'weeks.')

print('Calculate your savings')
print('Easy way or hard way?')
print('A: Easy....    B: Hard')

print('Hello user! Insert the amount of money you intend to save per week: ')
# get info from user
bal = int(input())
while bal == 0:
    print('Enter a non-zero number')
    bal = int(input())
else:
    pass
print('Print your target savings amount: ')
pay = int(input())
while pay == 0:
    print('Enter a non-zero number')
    pay = int(input())
else:
    pass

print('You will be able to make this payment in',end=' ')
simcalc(pay,bal)
