'''
def permute(xs, low=0):
    if low + 1 >= len(xs):
        yield xs
    else:
        for p in permute(xs, low + 1):
            yield p
        for i in range(low + 1, len(xs)):
            xs[low], xs[i] = xs[i], xs[low]
            for p in permute(xs, low + 1):
                yield p
            xs[low], xs[i] = xs[i], xs[low]

for p in permute(["A", "B", "C", "D"]):
    print (p)
'''
# YOUR NAME:
# YOUR PSU EMAIL ADDRESS:
# DESCRIPTION OF ALGORITHM (APPROACH):
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
import copy
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS IN THIS SECTION
# -----------------------------------------------


def perm(li,result=[]):
   if li == [] or li == None:
      return
   if len(li) == 1:
      result.append(li[0])
      print(result)
      result.pop()
      return

   for i in range(0,len(li)):
      result.append(li[i])
      perm(li[:i] + li[i+1:],result)
      result.pop()




# ------------------------------------------------
# END OF FUNCTION DEFINITIONS
# ------------------------------------------------
# DO NOT MODIFY WHAT IS BELOW
def main():
    list = input().split(',')
    perm(list)


if __name__ == "__main__":
    main()

