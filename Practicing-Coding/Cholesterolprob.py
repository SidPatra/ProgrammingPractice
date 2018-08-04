print('Please enter LDL:',end=' ')
ldl = int(input())
print(ldl)
print('Please enter HDL:',end=' ')
hdl = int(input())
print(hdl)
print('Please enter triglycerides:',end=' ')
tri = int(input())
print(tri)


b = 0
g = 0
i = 0
if ldl < 100:
    g+=1
elif ldl > 130:
    b += 1
else:
    i += 1
if hdl > 60:
    g += 1
elif hdl < 50:
    b += 1
else:
    i += 1
if tri < 150:
    g += 1
elif tri > 200:
    b += 1
else:
    i += 1

if (b >=1):
 print('Warning: cholesterol looks bad!')
elif (i >=2 and g >=0 and b == 0) or (g==2 and i ==1):
 print('Borderline cholesterol problems.')
elif g ==3:
 print('Cholesterol looks great!')
