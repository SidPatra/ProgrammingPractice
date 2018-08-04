import turtle
bob = turtle.Turtle()
print(bob)
# to make a right angle:
'''
bob.fd(100)
bob.lt(90)
bob.fd(100)'''
'''
      |
      |
______|

sum = 1
for i in range(360):
    if sum < 360:
        bob.lt(sum)
        bob.fd(sum)
        sum +=1
    else:
        bob.fd(100)
        break
'''

def square(t):
    for i in range(3):
        bob.fd(100)
        bob.lt(90)

    bob.fd(100)

square(turtle)





turtle.mainloop()
