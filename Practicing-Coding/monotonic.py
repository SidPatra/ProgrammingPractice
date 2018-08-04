def isasquare(x):
    for i in range(len(x)):
        if len(x) == i ** 2:
            return True
    print('Not a square!')
    return False


def intmaker(x):
    for i in range(len(x)):
        x[i] = int(x[i])
    return x


def monotonic(series):
    big = -1
    for i in range(len(series)):
        if i == 0:
            big = series[i]
        elif series[i] <= big:
            return False
        else:
            if series[i] > big:
                big = series[i]
                pass
    return True


def entirelymonotonic(num, length):
    if num == length:
        print('Entirely monotonic')
    else:
        print('NOT Entirely monotonic')


def gridmaker(x):
    l = int(len(x) ** 0.5)
    monotoneseries = []
    monotonescore = 0
    for i in range(0, len(x), l):
        for j in range(i, i + l):
            print('[', end='')
            print('%2d' % x[j], end='')
            print(']', end='')
            monotoneseries.append(x[j])
        if monotonic(monotoneseries) == True:
            print('--> monotonic')
            monotonescore += 1
        else:
            print('--> non-monotonic')
        monotoneseries =[]
    entirelymonotonic(monotonescore, l)


def main():
    listofx = []
    #print('INPUT:', end=' ')
    x = input()
    while x != '--HALT--':
        print('INPUT:',end=' ')
        print(x)
        x = x.split(',')
        if isasquare(x) == True:
            x = intmaker(x)
            gridmaker(x)
         #   print('INPUT:', end=' ')
            x = input()
        else:
          #  print('INPUT:', end=' ')
            x = input()


# MAKE SURE YOUR CODE BEGINS IN "MAIN"
if __name__ == "__main__":
    main()

