x = 4
y = 4.0
z = (x == y)
print(z)

'''


def displayBoard(b,d):
   for i in range(int(d * d)):
      b.append('_')
   for i in range(0,int(d**2),d):
      for j in range(d):
         if b[i+j] == '_':
            print(i+1+j,end=' | ')
         else:
            print(b[i+j],end=' | ')
      print()

def makeMove(b,m,t,d):
    if b[m-1] == '_':
        b[m-1] = t
        return True
    else:
        print('Already filled')
        return False

def fullRow(b,t,d):
    z = 0
    sc = 0
    for i in range(0,int(d**2),d):
        for j in range(d):
            if j == 0 and b[i+j] != '_':
                z = b[i+j]
                pass
            else:
                if z == b[i+j]:
                    sc +=1
                    if sc == d-1:
                        return z, True
        if sc < 2:
            sc = 0
    return False

def fullCol(b,t,d):
    z = 0
    sc = 0
    for i in range(d):
        for j in range(i,int(d**2),d):
            if j == i and b[j] != '_':
                z = b[j]
                pass
            elif b[j] == '_':
                break
            else:
                if z == b[j]:
                    sc +=1
                    if sc == d-1:
                        return z, True
        if sc < d-1:
            sc = 0
    return False

def fullDiagL(b,t,d):
    z = 0
    sc = 0
    for i in range(0, int(d ** 2), d + 1):
        if i == 0 and b[i] != '_':
            z = b[i]
            pass
        else:
            if b[i] == z:
                sc+=1
                if sc == d-1:
                    return True
        if sc < d-1:
            sc = 0
    return False

def fullDiagR(b,t,d):
    z = 0
    sc = 0
    for i in range(d - 1, int(d * d) - (d - 1), d - 1):
        if i == d-1 and b[i] != '_':
            z = b[i]
            pass
        else:
            if z == b[i]:
                sc +=1
                if sc == d-1:
                    return z, True
    if sc < d-1:
        return False

def fullDiag(b,t,d):
    return fullDiagL(b,t,d) or fullDiagR(b,t,d)

d = int(input('Dim: '))
b = []
for i in range(int(d*d)):
    b.append('_')
displayBoard(b,d)
'''