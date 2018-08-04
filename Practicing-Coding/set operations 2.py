# YOUR NAME: Siddharth Patra
# YOUR PSU EMAIL ADDRESS: smp6183@psu.edu
# DESCRIPTION OF ALGORITHM (APPROACH):
# Checks if an element of A is in B by going through the list.
# If even one item doesn't match, then it says 'A[i] not in list B'.

# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS IN THIS SECTION
# -----------------------------------------------
def myIsSubset(A,B):
   for i in range(len(A)):
      if A[i] in B:
         pass
      else:
         print(A[i],'is not in',B)
         return False
def myProductSet(a,b):
   print('Creating the product set of',a,'and',b)
   finalst = []
   newlst = []
   for i in range(len(a)):
      for j in range(len(b)):
         newlst.append(a[i])
         newlst.append(b[j])
         print('Adding',newlst)
         finalst.append(newlst)
         newlst = []
   return finalst

#------------------------------------------------
# END OF FUNCTION DEFINITIONS
#------------------------------------------------
# DO NOT MODIFY WHAT IS BELOW
def main() :
    input1 = input("Please enter the list A, elements separated by commas: ")
    a = input1.split(",")
    print(a)
    input2 = input("Please enter the list B, elements separated by commas: ")
    b = input2.split(",")
    print(b)
    if myIsSubset(a, b):
        print(a, "IS a subset of", b)
    else:
        print(a, "is NOT a subset of", b)
    ps = myProductSet(a,b)
    print("PRODUCT SET OF A and B:", ps)
if __name__ == "__main__":
    main()

