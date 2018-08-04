#Choose your own adventure!

print('You are in the woods, what do you do?')
print('You can go left/right some distance and light a fire or call for help')

print('which direction:')
x = input()
print(x)
print('how far?')
y = int(input())
print(y)
print('help or fire?')
z = input()
print(z)

if type(x) == str and type(y) == int and type(z) == str:
    print('You go to the ',x,'about ',y,'feet. Once you get there, you:',z)
elif type(y) != int:
    print('enter a number of feet to walk')
elif type(x) != str or type(z) != str:
    print('enter a direction or an action, not a number')