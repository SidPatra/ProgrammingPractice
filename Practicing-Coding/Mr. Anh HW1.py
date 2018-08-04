'''
def factorialfinder(x):
    z=1
    for i in range(x+1):
        if i == 0:
            pass
        else:
            z = i*z
    return z

print('Enter an integer: ')
x = int(input())
print(factorialfinder(x))

def rectanglemenu(x):
    if x!=4:
        print('Enter length: ', end='')
        l = int(input())
        print('Enter width: ', end='')
        w = int(input())
        if x == 1: #area
            area = l*w
            print('Area:',end=' ')
            return area
        if x==2: #perimeter
            perimeter = (2*l)+(2*w)
            print('Perimeter:', end=' ')
            return perimeter
        if x == 3: #diagonal
            diagonal = ((l**2)+(w**2))**0.5
            print('Diagonal:',end=' ')
            return diagonal
    else:
        print('Program ended')

print('Rectangle Menu: ')
print('1. Area\n2. Perimeter\n3. Diagonal\n4. Exit')
x = int(input())
print(rectanglemenu(x))'''
print('Please enter the number of credits for the course: ',end='')
c = int(input())
print(c)
print('Please enter your letter grade: ',end='')
g = str(input())
print(g)
p = 0
if g == 'A':
	p = c*4
	print('You get',p,'GPA points for that course.')
elif g == 'A-':
	p = c*3.67
	print('You get',p,'GPA points for that course.')
elif g == 'B+':
	p = c*3.33
	print('You get',p,'GPA points for that course.')
elif g == 'B':
	p = c*3
	print('You get',p,'GPA points for that course.')
elif g == 'B-':
	p = c*2.67
	print('You get',p,'GPA points for that course.')
elif g == 'C+':
	p = c*2.33
	print('You get',p,'GPA points for that course.')
elif g == 'C':
	p = c*2
	print('You get',p,'GPA points for that course.')
elif g == 'D':
	p = c*1
	print('You get',p,'GPA points for that course.')
elif g == 'F':
	p = 0
	print('You get',p,'GPA points for that course.')
else:
	print('Invalid grade!')