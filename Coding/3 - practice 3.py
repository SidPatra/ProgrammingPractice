# To convert degrees Celsius to degrees Kelvin, we simply add 273 (°K= °C + 273).
# Prompt the user for a temperature in degrees Celsius, then convert that
# temperature to degrees Kelvin.
c = 0
while(c >= 0):
    print('Enter temperature in Celsius:',end=' ')
    c = int(input())
    print("That's ",c+273,"degrees Kelvin.")
