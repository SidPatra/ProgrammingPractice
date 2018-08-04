''' ALL THE FUNCTIONS'''
'''----------'''
'''TO DEBUG::'''
'''----------'''
''' CHECK INPUT NUMBERS: 5,6,7.
    CHECK INPUT NUMBERS: 1,3,5.
    Input number 6 breaks code
   FIX XSYMTEST <- Probably fixed now'''

def xsymtest(x):
    if len(x) != 1:
        print('Choose a different character: ', end='')
        x = input('')
    for i in range(10):
        ix = str(i)
        if x == ix:
            print('Choose a different character: ', end='')
            x = input('')
    else:
        return True



def boardmaker(x):
    for i in range(1,(x*x)+1, x):
        print('%3d' % i,end='|')
        for j in range(i+1,x+i):
            print('%3d' % j,end='|')
        print('')

def newboard(x,n,w):
    for i in range(1, (x * x) + 1, x):
        if i in n:
            print('%3s' % xsym, end='|')
            w[i-1] = 1
        else:
            print('%3d' % i, end='|')
        for j in range(i+1, x + i):
            if j in n:
                print('%3s' % xsym, end='|')
                w[j-1] = 1
            else:
                print('%3d' % j, end='|')
        print('')

def horiztest(w,h):
    for i in range(1, (dim * dim) + 1, dim):
        h = 0
        for j in range(i, i + dim):
            if w[j - 2] == 1 and w[j - 1] == 1:
                h += 1
        if h == dim - 1:
            print('You won!')
            print('Condition: Full horizontal row!')
            return True
def vertitest(w,v):
    for j in range(0, dim):
        for i in range(0, (dim * dim), dim):
            if i - dim + j < 0:
                pass
            elif w[i - dim + j] == 1 and w[i + j] == 1:
                v += 1
        if v == dim - 1:
            print('You won!')
            print('Condition: Full vertical row!')
            return True

def diagL(w,dL):
    for i in range(0, dim):
        for j in range(0, (dim * dim), dim):
            if i - dim + j > 0:
                pass
            if w[i - dim + j] == 1 and w[i + j + 0] == 1:
                dL += 1
        if dL == dim - 1:
            print('You won!')
            print('Condition: Full diagonal row LHS!')
            return True

def diagR(w,dR):
    for i in range(0, dim * dim):
        if w[i] == 1:
            for j in range(i, dim * dim, dim - 2):
                if w[i] == w[j]:
                    dR += 1
                break
    if dR == dim:
        print('You won!')
        print('Condition: Full diagonal row RHS!')
        return True

def wintest2(w,h,v,dL,dR):
    if (horiztest(w,h) == True) or (vertitest(w,v) == True) or (diagL(w,dL) == True) or (diagR(w,dR) == True):
        return True


'''def wintest(w,h,v,dL,dR):

    #horizrow: <- done
    for i in range(1,(dim*dim)+1,dim):
        h = 0
        for j in range(i,i+dim):
            if w[j-2] == 1 and w[j-1] == 1:
                h+=1
        if h==dim-1:
            print('You won!')
            print('Condition: Full horizontal row!')
            return True

    #vertirow:
    for j in range(0,dim):
        for i in range(0,(dim*dim),dim):
            if i-dim+j < 0:
                pass
            elif w[i-dim+j] == 1 and w[i+j] == 1:
                v+=1
        if v == dim-1:
            print('You won!')
            print('Condition: Full vertical row!')
            return True

    #diagrowLHS
    for i in range(0,dim):
        for j in range(0,(dim*dim),dim):
            if i-dim+j < 0:
                pass
            elif w[i-dim+j] == 1 and w[i+j+1] == 1:
                dL+=1
        if dL == dim-1:
            print('You won!')
            print('Condition: Full diagonal row LHS!')
            return True
    #diagrowRHS
    for i in range(0,dim*dim):
        if w[i] == 1:
            for j in range(i,dim*dim,dim-2):
                if w[i] == w[j]:
                    dR += 1
                break
    if dR == dim:
        print('You won!')
        print('Condition: Full diagonal row RHS!')
        return True
'''

'''FUNCTIONS END'''

'''INITIALIZED VALUES'''
wbool = False
xsymbool = False
winlist = []
horizrow = 0
vertirow = 0
diagLHS = 0
diagRHS = 0
'''ALL VALUES INITIALIZED'''

'''MAIN CODE'''

print("Enter your chosen symbol (pls don't use a number):",end=' ')
xsym = input()
if xsymtest(xsym) == True:
    print('Confirm character: ',end='')
    xsym = input()
print('Input diameter:',end=' ')
dim = int(input())



while True:
    if type(dim) != int:
        print('Input a number')
    else:
        break
for i in range(dim*dim):
    winlist.append(0)
boardmaker(dim)
print('Insert number:',end=' ')
num = int(input())
numlist = []
numlist.append(num)
while True:
    newboard(dim,numlist,winlist)
    print(winlist)
    #wbool = wintest(winlist,horizrow,vertirow,diagLHS,diagRHS)
    wbool = wintest2(winlist,horizrow,vertirow,diagLHS,diagRHS)
    if wbool == True:
        print('End of game!')
        break
    else:
        num = int(input('Insert number: '))
        numlist.append(num)