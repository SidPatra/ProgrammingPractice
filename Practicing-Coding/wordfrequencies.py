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

def process(w,ws):
   print("Words and frequencies")
   lst = []
   lst.append(w)
   ws = lst
def dictionaryToSortedList(ws):
   print(ws)
def showEm(lst):
   print('Print everything out?')
def most(lst):
   print('most frequent for sure')

#------------------------------------------------
# END OF FUNCTION DEFINITIONS
#------------------------------------------------
# DO NOT MODIFY WHAT IS BELOW
def main() :
    words = {}
    address = input()
    print(address)
    for word in address.split():
        process(word, words)
    lst = dictionaryToSortedList(words)
    showEm(lst)
    most(lst)
if __name__ == "__main__":
    main()

