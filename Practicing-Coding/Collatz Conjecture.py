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
# --------------------

def collatz(num, steps=0):
    if num == 1:
       # print(num)
        return steps
    else:
        if num % 2 == 0:
            steps+=1
            num /=2
            num = int(num)
            if num != 1:
                print(num,end=',')
            else:
                print(num)
            return collatz(num,steps)
        else:
            steps+=1
            num *= 3
            num += 1
            num = int(num)
            if num != 1:
                print(num,end=',')
            else:
                print(num)
            return collatz(num,steps)



# ------------------------------------------------
# END OF FUNCTION DEFINITIONS
# ------------------------------------------------
# DO NOT MODIFY WHAT IS BELOW
def main():
    num = int(input("Enter a positive integer: "))
    print(collatz(num), "steps")


if __name__ == "__main__":
    main()

