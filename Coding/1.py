def thisfunction(myString): #myString can be inputted in numerous location - it's a variable
    print(myString)
    myName = input('what is your name?: ')
    if(myName == "Sid"):
        print("Sid is ok")
    elif(myName == "Ashdaddy"): #show ashwin this lol
        print ("Hey sexy")
    elif(myName == "Lexie"): 
        print ("Team Sexie: Unite!")
    else:
        print ("bro who tf are you")
    myNumber = input("Pick a number, bro: ")
    if (myNumber == '69'):
        print ("Noice") #else-if practice
    if (myNumber == '420' and myName == 'Lexie'):
        print ("Say no to drugs!")
    if (myNumber == '69' and myName == 'Ashdaddy'):
        print ("Harder, daddy")
    elif (myNumber == '420'):
        print ("Blaze it m8")
    elif (myNumber != '69' and myNumber != '420'):
        print ("Be more gangsta")

thisfunction('Hello world!')
