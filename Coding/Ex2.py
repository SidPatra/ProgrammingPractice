#list reverser

list = []

print('Print stuff for list here')
x = '1'
n = 0
while x !='0':
    x = input()
    print(x)
    if x == '0':
        print(list[::-1])
    if x != '0':
        n += 1
        list.append(x)