# YOUR NAME: Siddharth Patra
# YOUR PSU EMAIL ADDRESS: smp6183@su.edu
# DESCRIPTION OF ALGORITHM (APPROACH):
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
import math
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS (NOT INCLUDING MAIN) IN THIS SECTION

def horiz(d, r, p):
    for i in range(r):
        total = 0
        for j in range(r):
            total += d[(i*r)+j]
        print('Horizontal total is',total)
        if p != -1 and total != p:
            print('Horizontal totals do not match')
            return -1
        p = total
    return p

def verti(d,r,p):
    for i in range(r):
        total = 0
        for j in range(r):
            total += d[(j*r)+i]
        print('Vertical total is',total)
        if p != -1 and total != p:
            print('Vertical totals do not match')
            return -1
        p = total
    return p

def diag1(d,r,p):
    i = 0
    total = 0
    while i < len(d):
        total += d[i]
        i += r + 1
    print('Diagonal 1 total is', total)
    if total != p:
        print('Diagonal totals do not match :-(')
        return -1
    return p

def diag2(d,r,p):
    i = r-1
    total = 0
    while i < len(d)-1:
        total += d[i]
        i += r - 1
    print('Diagonal 2 total is', total)
    if total != p:
        print('Diagonal totals do not match :-(')
        return -1
    return p

def getData():
    print('Enter a data value or **STOP**: ',end='')
    x = input()
    print(x)
    l = []
    while x != '**STOP**':
        x = int(x)
        l.append(x)
        print('Enter a data value or **STOP**: ',end='')
        x = input()
        print(x)
    return l

def isMagic(d):
    # square testing:
    r = math.floor(math.sqrt(len(d)))
    if math.sqrt(len(d)) != r:
        print('Not even a square!')
        return False
    prev = -1
    prev = horiz(d,r,prev)
    if prev == -1:
        return False
    prev = verti(d,r,prev)
    if prev == -1:
        return False
    prev = diag1(d,r,prev)
    if prev == -1:
        return False
    prev = diag2(d,r,prev)
    if prev == -1:
        return False
    return True

# END OF FUNCTION DEFINITIONS
#------------------------------------------------
# DO NOT MODIFY ANYTHING BELOW HERE!
def main():
    data = getData()
    print(data)
    if isMagic(data):
        print("IS A MAGIC SQUARE!")
    else:
        print("NOT A MAGIC SQUARE!")
if __name__ == "__main__":
    main()

