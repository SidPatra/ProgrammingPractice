#num1 and num2 are called arguments, seperable by comma
def add(num1, num2): 
    return num1 + num2 #addition
def sub(num1, num2):
    return num1 - num2 #subtraction
def mul(num1, num2):
    return num1 * num2
def div(num1, num2):
    return num1 / num2
add(7,9)
sub(2,11)


def main():          
    operation = input("what do you want to do? +,-,*,/?")
    var2 = int(input("Enter num2: "))
    if (operation != '+' and operation != '-' and operation != '*' and operation != '/'):
        print ("enter a valid operation")
    else:   
        if(operation == "+"):
            result = add(var1, var2);
        elif(operation == "-"):
            result = sub(var1, var2)
        elif(operation == "*"):
            result = mul(var1, var2)
        elif(operation == "/"):
            result = div(var1, var2)
    var1 = result
    print (result)
while(True):
    var1 = int(input("Enter num1: "))
    main()
