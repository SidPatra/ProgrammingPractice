#turtle module, turtle graphicsa



import turtle

'''
bob = turtle.Turtle()
def squarespiral():
    for i in range(1,100):
        bob.pencolor()
        bob.fd(2*i)
        bob.lt(90)

def square1():
    bob.fd(100)
    bob.lt(90)
    bob.fd(100)
    bob.lt(90)
    bob.fd(100)
    bob.lt(90)
    bob.fd(100)
    bob.lt(90)

def square2():
    for i in range(4):
        bob.fd(100)
        bob.lt(90)

def triangle():
    bob.fd(100)
    bob.lt(120)
    bob.fd(100)
    bob.lt(120)
    bob.fd(100)
    bob.lt(120)


#triangle()

def drawhouse():
    bob.fd(100)
    bob.lt(90)
    bob.fd(100)
    bob.lt(30)
    bob.fd(100)
    bob.lt(120)
    bob.fd(100)
    bob.lt(30)
    bob.fd(100)
    bob.lt(90)

#drawhouse()
def drawSquare(size):
    bob.fd(100)
    bob.lt(90)
    bob.fd(100)
    bob.lt(90)
    bob.fd(100)
    bob.lt(90)
    bob.fd(100)
    bob.lt(90)

def drawTriangle(size):
    bob.fd(size)
    bob.lt(120)
    bob.fd(size)
    bob.lt(120)
    bob.fd(size)
    bob.lt(120)

def actualdrawhouse(size):
    drawSquare(size)
    #repositions turtle
    bob.lt(90)
    bob.fd(size)
    bob.rt(90)
    drawTriangle(size)
    bob.rt(90)
    bob.fd(size)
    bob.lt(90)

#actualdrawhouse(100)
#square1()

def drawTally():
    bob.lt(90)
    bob.fd(20)
    bob.backward(20)
    bob.rt(90)

input()


def polygon(sides):
    for i in range(sides):
        bob.lt(360/sides)
        bob.fd(1000/sides)
while sides != 0:
    polygon(sides)
    sides = int(input())



#####################

def drawSlash():
    bob.lt(90)
    bob.penup()
    bob.fd(3)
    bob.pendown()
    ##
    startposition = pos()
    goto(startoposition[0] - 25, startposition[1] + 14)
    #return to starting position
    bob.penup()
    goto(startposition)
    bob.bk(3)
    bob.rt(90)
    bob.pendown()

def shiftRight():
    bob.penup()
    bob.fd(5)
    bob.pendown()

def drawTally():
    bob.lt(90)
    bob.fd(20)
    bob.bk(20)
    bob.rt(90)
    shiftRight()

drawTally()
drawTally()
drawTally()
drawTally()
drawSlash()

###############'''

import math
bob = turtle.Turtle()

def drawFive():
    drawTally()
    drawTally()
    drawTally()
    drawTally()
    drawSlash()

def drawTallies(n):
    while (n >= 5):
        drawFive()
        n = n-5
    while (n>=1):
        drawTally()
        n= n-1