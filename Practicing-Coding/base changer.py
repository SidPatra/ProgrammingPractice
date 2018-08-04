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

def toBase(n, b):
    if n > b:
        toBase(n//b,b)
    print(n%2,end='')


# ------------------------------------------------
# END OF FUNCTION DEFINITIONS
# ------------------------------------------------
# DO NOT MODIFY WHAT IS BELOW
def main():
    n = int(input())
    b = int(input())
    print(n, "in base", b, "is ", end="")
    toBase(n, b)


if __name__ == "__main__":
    main()

