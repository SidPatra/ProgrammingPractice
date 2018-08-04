#Write a program which asks the user his/ her last name, stores it in a variable
# called lname, then asks What is your age? and stores it in a variable called
# age. After this, the program displays a userid, for example as follows:

#What is your last name? Jones
#What is your age? 20
#Your user id is: Jones20

print('What is your last name?',end=' ')
lname = str(input())
print('What is your age?',end=' ')
age = str(input())
print('Your user id is:',end=' ')
print(lname+age)
