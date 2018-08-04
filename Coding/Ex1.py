# 1 item cash register

# set of items to sell,
# #items have price and name
# when customer wants item, they will tell you name or the name and price
# either ask for amount paid and give change

dict = {
    'thing1': 10,
    'thing2': 20,
    'thing3': 30
}

print('What item would you like?',end=' ')
n = input()
p = float(input())
c = 0

if n in dict and p >= dict[n]:
    print(n, 'has price $', dict[n])
    c = p - dict[n]
    print('Your change is:',c)
elif p<=dict[n]:
    print('Not enough money to purchase')