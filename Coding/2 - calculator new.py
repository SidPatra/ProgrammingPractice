#num1 and num2 are called arguments, seperable by comma
def add(num1, num2): 
    return num1 + num2 #addition
def sub(num1, num2):
    return num1 - num2 #subtraction
def mul(num1, num2):
    return num1 * num2 #multiplication
def div(num1, num2):
    return num1 / num2 #division


print()

def main():
    operation = input("what do you want to do? +,-,*,/?")
    if (operation != '+' and operation != '-' and operation != '*' and operation != '/'):
        print ("enter a valid operation")
    else:
        var1 = int(input("Enter num1: "))
        var2 = int(input("Enter num2: "))
		operation = input("what do you want to do? +,-,*,/?"):
                if (operation != '+' and operation != '-' and operation != '*' and operation != '/'):
			print ("enter a valid operation")
		elif (operation = 'enter')
			return 
		var3 = int(input("Enter num3: "))
        if(operation == "+"):
            print (add(var1, var2))
        elif(operation == "-"):
            print (sub(var1, var2))
        elif(operation == "*"):
            print (mul(var1, var2))
        elif(operation == "/"):
            print (div(var1, var2))
while(True):
    main()
