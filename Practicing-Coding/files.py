'''
0 1 2
3 4 5
6 7 8

0 1 2 3
4 5 6 7
8 9 10 11
12 13 14 15 16




'''
d=4
for i in range(d-1,int(d*d)-(d-1), d-1):
    print(i)


'''
file = open("Book1.csv", "r")
lines = []
lbl = []
for i in file:
    lines.append(i)

for i in range(len(lines)):
    x = lines[i].split(',')
    lbl.append(x)
print('lines =',len(lines))

for j in range(len(lbl)):
    x = lbl[j]
    for k in range(len(lbl[j])):
        if k == 0:
            print('%10s' % x[k],end=' |')
        if k ==1:
            print('%5s' % x[k],end=" |")
        elif (k >= 2) and (k <= 5):
            a = float(x[k])
            print('%8.2f'%a,end=' |')
        elif k == len(lbl[j])-1:
            b = int(x[k])
            print("%8d" % b)

file.close()
'''