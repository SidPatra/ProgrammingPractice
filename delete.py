'''
# YOUR NAME:
# YOUR PSU EMAIL ADDRESS:
# DESCRIPTION OF ALGORITHM (APPROACH):
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS IN THIS SECTION
# -----------------------------------------------

def powerof2(length):
   if length == 2:
      return True
   if length > 2:
      length /= 2
      return powerof2(length)
   return False
    

def pad(teams):
   if powerof2(len(teams)):
      return teams
   else:
      teams.append("bye")
      pad(teams)

def remove(teams,length,count=0):
   if len(teams) == length / 2:
      count = 0
      return teams,count
   else:
      teams.pop(count)
      count+=1
      remove(teams,length,count)
      
def play(teams,roundcount=0):
   if len(teams) == 2:
      print("Round:",roundcount)
      print(teams[0],"plays",teams[1],"and",teams[1],"wins")
      print(teams[1],"is the winner. yay")
      return teams
   print("Round:",roundcount)
   for i in range(1,len(teams),2):
      print(teams[i-1],"plays",teams[i],"and",teams[i],"wins")
   length = len(teams)
   remove(teams,length)
   roundcount+=1
   play(teams,roundcount)
   
      
#------------------------------------------------
# END OF FUNCTION DEFINITIONS
#------------------------------------------------
# DO NOT MODIFY WHAT IS BELOW
def main():
   inp = input()
   teams = inp.split(",")
   pad(teams)
   print(teams)
   play(teams, 1)
if __name__ == "__main__":
    main()

def merge(L1,L2):
    L=[]
    while(len(L1)>0)and(len(L2)>0):
       if L1[0]<L2[0]:
          L.append(L1.pop(0))
       else:
          L.append(L2.pop(0))
    while len(L1)!=0:
       L.append(L1.pop(0))
    while len(L2)!=0:
       L.append(L2.pop(0))
    return L

def mergeSort(L):
    n=len(L)
    if n<=1:
        return L
    L1=L[:n//2]
    L2=L[n//2:]
    L1=mergeSort(L1)
    L2=mergeSort(L2)
    return merge(L1,L2)


tst = [7,2,5,1,3,4,9,6,8]
new = mergeSort(tst)
print(new)

'''

def permutations(head, tail=''):
    if len(head) == 0:
       print (tail)
    else:
        for i in range(len(head)):
            permutations(head[0:i] + head[i+1:], tail+head[i])

permutations("1234")
