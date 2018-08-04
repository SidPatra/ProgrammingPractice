'''1 | 2 | 3
   4 | 5 | 6
   7 | 8 | 9
'''

''' ALL THE FUNCTIONS'''
def xsymtest(x): # check this loop out, doesn't function properly
    if len(x) != 1:
        print('Choose a different character: ', end='')
        x = input('')
        xsymtest(x)
    for i in range(10):
        ix = str(i)
        if x == ix:
            print('Choose a different character: ', end='')
            x = input('')
            xsymtest(x)
    else:
        return xsymbool == True



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

def wintest(w,h,v):
    '''diagrowLHS = 0
    diagrowRHS = 0'''
    #horizrow: <- done
    for i in range(1,(dim*dim)+1,dim):
        for j in range(i,i+dim):
            if w[j-2] == 1 and w[j-1] == 1:
                h+=1
        if h==dim-1:
            print('You won!')
            print('Condition: Full horizontal row!')
            return True
    '''
    #vertirow:
    for i in range(1,(dim*dim)+1,dim):
        if w[i-dim-1] ==1 and w[i] == 1:
            v+=1
    if v == 2:
        print('You won!')
        print('Condition: Full vertical row!')
        return True
'''

'''FUNCTIONS END'''

'''INITIALIZED VALUES'''
wbool = False
xsymbool = True
winlist = []
horizrow = 0
vertirow = 0
'''
diagrowLHS = 0
diagrowRHS = 0
dim = 0
ALL VALUES INITIALIZED
'''

'''MAIN CODE'''

print("Enter your chosen symbol (pls don't use a number):",end=' ')
xsym = input('')
xtest = 0
xsymtest(xsym)


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
   # print(vertirow)
    wbool = wintest(winlist,horizrow,vertirow)
    if wbool == True:
        print('End of game!')
        break
    else:
        num = int(input('Insert number: '))
        numlist.append(num)
        print(numlist)
