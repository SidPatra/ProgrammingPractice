def binarycalc(x):
    while x!=2:
        if (x / 2 > 1) and (x%2 == 0):
            print(1,end='')
            x = int(x/2)
        elif x%2 == 1:
            print(0,end='')
            x = int(x/2)
def int2bin(i):
    if i == 0:
        return 0
    s = ''
    while i:
        if i & 1 == 1:
            s = "1" + s
        else:
            s = "0" + s
        i /= 2
    return s

''' WILL BE USED FOR CODEPSU'''

string = input() # not set up for files yet
lists = []
for i in range(len(string)):
    lists.append(string[i])

for i in range(len(lists)):
    if lists[i] == 'a' or lists[i] == 'e' or lists[i] == 'i' or lists[i] == 'o' or lists[i] == 'u': # handles vowels
        print(lists[i],end='')
    elif lists[i] == '0' or lists[i] == '1' or lists[i] == '2' or lists[i] == '3' or lists[i] == '4' or lists[i] == '5' or lists[i] == '6' or lists[i] == '7' or lists[i] == '8' or lists[i] == '9':
        lists[i] = int(lists[i])
        print('{0:b}'.format(lists[i]),end='')
        # ^^ handles numbers and turns them into binary
    elif lists[i] == '-':
        print()
    else:
        print('beepbloop',end='')
        #everything else is just a beep bloop
# binary calculator

