toframe = input() #call this a quote
# set dimensions
toframe = toframe.split(",")
actualtext = toframe[0] #actual text that'll be framed
length = len(actualtext)
material = toframe[1] # material, like the symbol in the frame
thickness = int(toframe[2]) # how many layers of of the symbol there will be
gap = int(toframe[3]) # how far the frame is from the main text enclosed

def topbottomlayers(thicknness, length, material,gap):
    for j in range(thickness):
        for i in range(length + (2 * (gap+thickness))):
            print(material, end='')
        print()

def sideedge(thickness,material,gap):
    for i in range(thickness):
        print(material,end='')
    for i in range(gap+length+gap):
        print(' ',end='')
    for i in range(thickness):
        print(material,end='')
    print()
#output part is here:

topbottomlayers(thickness,length,material,gap) #get gap involved

for i in range(gap):
    sideedge(thickness,material,gap) #notyet

for i in range(3):
    if i == 0:
        print(material*thickness,end='')
        print(gap*" ",end='')
    if i == 1:
        print(actualtext,end='')
    if i == 2:
        for i in range(gap):
            print(' ', end='')
        print(material*thickness)

for i in range(gap):
    sideedge(thickness,material,gap)
topbottomlayers(thickness,length,material,gap)
