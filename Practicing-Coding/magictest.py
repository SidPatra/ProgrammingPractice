# YOUR NAME: Siddharth Patra
# YOUR PSU EMAIL ADDRESS: smp6183@psu.edu
# DESCRIPTION OF ALGORITHM (APPROACH):
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS (NOT INCLUDING MAIN) IN THIS SECTION
import math
# END OF FUNCTION DEFINITIONS
# ------------------------------------------------
# DO NOT MODIFY ANYTHING BELOW HERE!

def horiz(d,r,p):
    for a in range(0,r):
        total = 0
        for b in range (0,r):
            total += d[(a*r)+b]
        print("Horizontal total is",total)
        if p != -1 and total == p:
            print("Horizontal totals don't match :-()")
            return -1
        prev = total
    return prev

def verti(d,r,p):
    for a in range(0,r):
        total = 0
        for b in range (0,r):
            total += d[(a*r)+b]
        print("Horizontal total is",total)
        if p != -1 and total == p:
            print("Vertical totals don't match :-()")
            return -1
        prev = total
    return prev

'''
def horiz(d,r,p):
    dl = int(r**2)
    sum = 0
    suml = []
    p = -1
    z = 0
    for i in range(0, dl, r):
        for j in range(r):
            sum += d[i+j]
        print('Horizontal total is',sum)
        suml.append(sum)
        sum = 0
    for i in range(len(suml)):
        if i == 0:
            z = suml[i]
        else:
            if suml[i] != z:
                print("Horiz doesn't match")
                return p
            else:
                continue
    return suml[0]
def verti(d):
    dl = int((len(d))**0.5)
    sum = 0
    suml = []
    z = 0
    for i in range(dl):
        for j in range(i,int(dl**2),dl):
            sum += d[j]
        print('Vertical total is', sum)
        suml.append(sum)
        sum = 0
    for i in range(len(suml)):
        if i == 0:
            z = suml[i]
        else:
            if suml[i] != z:
                print("Verti doesn't match")
                return -1
            else:
                continue
    return suml[0]



def diagL(d):
    dl = int((len(d)) ** 0.5)
    sum = 0
    for i in range(0, int(dl ** 2), dl + 1):
        sum += d[i]
    print('Diagonal 1 total is', sum)
    return sum

def diagR(d):
    dl = int((len(d)) ** 0.5)
    sum = 0
    for i in range(dl - 1, int(dl * dl) - (dl - 1), dl - 1):
        sum += d[i]
    print('Diagonal 2 total is', sum)
    return sum


def diag(d):
    if diagL(d) == diagR(d):
        return diagL(d)
    else:
        print("Diags don't match")
        return -1
'''
def getData():
    print('Enter a data value or **STOP**: ', end='')
    l = []
    x = input()
    print(x)
    while x != '**STOP**':
        x = int(x)
        l.append(x)
        print('Enter a data value or **STOP**: ', end='')
        x = input()
        print(x)
    return l

def isMagic(d):
    prev = -1
    r = math.floor(math.sqrt(len(d)))
    if math.sqrt(len(d)) != r:
        print('Not even a square!')
        return False
    prev = horiz(d,r,prev)
    if prev == -1:
        return False
    prev = verti(d,r,prev):
    if prev == -1:
        return False
    prev = diagL(d, r, prev):
    if prev == -1:
        return False
    prev = diagR(d, r, prev):
    if prev == -1:
        return False
    return True

'''
def isMagic(d):
    #square test
    rowSize = math.floor(math.sqrt(len(d)))
    if math.sqrt(len(d)) == rowSize:
        print('Not even a square!')
        return False
    prev = -1
    prev = horiz(d,rowSize,prev)
    if prev == -1:
'''




def main():
    data = getData()
    print(data)
    if isMagic(data):
        print("IS A MAGIC SQUARE!")
    else:
        print("NOT A MAGIC SQUARE!")


if __name__ == "__main__":
    main()

