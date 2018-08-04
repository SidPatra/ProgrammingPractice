#calculator that does addition, subtraction, multiplication, division

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
print("Here's the calculator!")
x=int(input('Number 1: '))
while x != 'END':
    y=int(input('Number 2: '))
    w=input('Choose function (+,-,*,/): ')
    if w == '+':
        print(add(x, y))
    elif w == '-':
        print(sub(x, y))
    elif w == '*':
        print(multi(x, y))
    else:
        print(div(x,y))
    x = int(input('Number 1: '))