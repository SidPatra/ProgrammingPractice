# Adds, multiplies, and divides forever until you tell it to stop

def add(x,y):
    z = x+y
    return z
def sub(x,y):
    z = x-y
    return z
def multi(x,y):
    z = x*y
    return z
def div(x,y):
    z = x/y
    return z


x=0
y=0
w=0
z=0
n = 1
print("Here's the calculator!")
x=int(input('Number %d: ' % n))
n+=1
while w != 'END':
    w = input('Choose function (+,-,*,/): ')
    if w != '+' and w != '-' and w != '*' and w != '/' and w != 'END':
        print('Try again')
        w = input('Choose function (+,-,*,/): ')
    elif w == 'END':
        print('Final answer is',f)
        break
    y = int(input('Number %d: ' % n))
    n += 1
    if w == '+':
        print(add(x, y))
        x = add(x, y)
    elif w == '-':
        print(sub(x, y))
        x = sub(x, y)
    elif w == '*':
        print(multi(x, y))
        x = multi(x, y)
    elif w == '/':
        print(int(div(x, y)))
        x = div(x, y)
    f = x
else:
    print('Final answer is:',f)