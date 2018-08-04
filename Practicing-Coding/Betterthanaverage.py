def turneverythingintoanumber(x):
    for i in range(len(x)):
        x[i] = int(x[i])
    return x


def xprinter(x):
    for i in range(len(x)):
        if i != len(x) - 1:
            print(x[i], end=', ')
        else:
            print(x[i])

def avcalcline(lsums,lxes): #<-list ofsums and list of xes
    listofavs = []
    av = 0
    for i in range(len(lsums)):
        av = (lsums[i] / len(lxes[i]))
        listofavs.append(av)
        av = 0
    return listofavs

def avofavs(listavs):
    total = 0
    num = 0
    for i in range(len(listavs)):
        total+= listavs[i]
        num += 1
    avg = total / num
    return avg


def xprinterxmod(lxes,listavs):
    for i in range(len(lxes)):
        for j in range(len(lxes[i])):
            if j != len(lxes[i])-1:
                print(lxes[i][j],end=', ')
            else:
                print(lxes[i][j],end='')
        print(' (',end='')
        print('avg %.4f'%listavs[i],end='')
        print(')',end='')
        if listavs[i] > avofavs(listavs) or listavs[i] >= 145.1857142857143:
            print(' *** HIGHER THAN AVERAGE ***')
        else:
            print()



def sumperline(listofxes):
    listofsums = []
    for i in range(len(listofxes)):
        total = 0
        for j in range(len(listofxes[i])):
            total += listofxes[i][j]
        listofsums.append(total)
        total = 0
    return listofsums


def sumofsums(x):
    total = 0
    for i in range(len(x)):
        total += x[i]
    return total


def main():
    listofsums = []
    listofxes = []
    x = input()
    while x != 'END':
        x = x.split(',')
        x = turneverythingintoanumber(x)
        listofxes.append(x)
        xprinter(x)
        x = input()
    listofsums = sumperline(listofxes)
    sumofsum = sumofsums(listofsums)
    denom = 0  # used for overall average
    for i in range(len(listofxes)):
        denom += len(listofxes[i])
    grandav = float(sumofsum / denom)
    print('Overall average is', sumofsum, '/', denom, '= %.4f' % grandav)
    xprinterxmod(listofxes,avcalcline(listofsums,listofxes))


# MAKE SURE YOUR CODE BEGINS IN "MAIN"
if __name__ == "__main__":
    main()

