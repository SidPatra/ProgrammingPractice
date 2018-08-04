import os

path = "C:/Users/NicolasSaenz/(The directory where "output1.txt" is in)"

file_name = os.path.join(path, "output1.txt")
my_file = open(file_name)
my_file_contents = my_file.read()
maxpr = -1
maxt = 'NONE'
maxd = 'NONE'
prevdate = 'NONE'
data = my_file.read()

while data != '[***STOP***]':
    date, tick, openp, high, low, close, vol = data.split(',')
    openp = float(openp)
    high = float(high)
    low = float(low)
    close = float(close)
    vol = int(vol)
    profit = close - openp
    if (profit > maxpr):
        maxpr = profit
        maxt = tick
        maxd = date
        #   print('Highest profit for %10s was %8.2f (%5s)' % (maxd, maxpr, maxt))
    if (date != prevdate) and (prevdate != 'NONE'):
        print('Highest profit for %10s was %8.2f (%5s)' % (maxd, maxpr, maxt))
        maxt = 'NONE'
        maxd = 'NONE'
        maxpr = -1

    prevdate = date
    data = open("Book1.csv", "r")

print('Highest profit for %10s was %8.2f (%5s)' % (maxd, maxpr, maxt))

close(data)