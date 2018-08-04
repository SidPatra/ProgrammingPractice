#num1 and num2 are called arguments, seperable by comma
def add(num1, num2): 
    return num1 + num2 #addition
def sub(num1, num2):
    return num1 - num2 #subtraction
def mul(num1, num2):
    return num1 * num2 #multiplication
def div(num1, num2):
    return num1 / num2 #division
def mainsub1(char,var1,var2):
    if(char == "+"):
        return (add(var1, var2))
    elif(char == "-"):
        return (sub(var1, var2))
    elif(char == "*"):
        return (mul(var1, var2))
    elif(char == "/"):
        return (div(var1, var2))


def main():
	num1 = int(input("Enter num1: "))
    operation = input("what do you want to do? +,-,*,/?")
    if (operation != '+' and operation != '-' and operation != '*' and operation != '/'):
        print ("enter a valid operation")
    else:
            num2 = int(input("Enter num2: "))
            Result = mainsub1(operation, num1, num2)
            print ("Result: ",Result)

while(True):
	main()
