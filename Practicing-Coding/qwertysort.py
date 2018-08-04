# YOUR NAME: Siddharth Patra
# YOUR PSU EMAIL ADDRESS: smp6183@psu.edu
# DESCRIPTION OF ALGORITHM (APPROACH):
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS IN THIS SECTION
# -----------------------------------------------

def qwertySort(lst):
    biglst = ['Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X',
              'C', 'V', 'B', 'N', 'M']
    # result should be: [E,O,H,L,L]
    newL = []
    count = 0
    for i in biglst:
        for j in lst:
            if i == j:
                newL.append(i)
    print(newL)
    return


'''
def compare(a,b):
   biglist = ['Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M']
   ap = -1
   bp = -1
   for i in range(len(biglist)):
      if a == biglist[i]:
         ap = i
      if b == biglist[i]:
         bp = i
   if ap > bp:
      return True
   return False


def qwertySort(L):
	for i in range(0,len(L)):
		temp = L[i]
		j = i-1
		while j >= 0 and compare(L[j],temp):
			L[j+1] = L[j]
			j -=1
		L[j+1] = temp


    '''


# ------------------------------------------------
# END OF FUNCTION DEFINITIONS
# ------------------------------------------------
# DO NOT MODIFY WHAT IS BELOW
def main():
    lst = []
    inp = input()
    while inp != "**STOP**":
        lst.append(inp)
        inp = input()
    qwertySort(lst)
    print(lst)


if __name__ == "__main__":
    main()

