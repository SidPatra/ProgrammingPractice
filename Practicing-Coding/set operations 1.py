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
def myUnion(a, b):
    newlst = []
    print('CREATING THE UNION')
    for i in range(len(a)):
      if (a[i] not in newlst):
         print('Adding',a[i])
         newlst.append(a[i])
    for i in range(len(b)):
      if (b[i] not in newlst):
         newlst.append(b[i])
         print('Adding',b[i])
    if len(newlst) != 0:
      return newlst


def myIntersection(a, b):
    newlst = []
    print('CREATING THE INTERSECTION')
    for i in range(len(a)):
        if (a[i] in b) and (a[i] not in newlst):
            print('Adding',a[i])
            newlst.append(a[i])
    return newlst


# ------------------------------------------------
# END OF FUNCTION DEFINITIONS
# ------------------------------------------------
# DO NOT MODIFY WHAT IS BELOW
def main():
    input1 = input("Please enter the list A, elements separated by commas: ")
    a = input1.split(",")
    print(a)
    input2 = input("Please enter the list B, elements separated by commas: ")
    b = input2.split(",")
    print(b)
    u = myUnion(a, b)
    print("UNION A and B:", u)
    i = myIntersection(a, b)
    print("INTERSECTION A and B:", i)


if __name__ == "__main__":
    main()

