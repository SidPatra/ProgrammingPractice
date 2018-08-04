# YOUR NAME: Siddharth Patra
# YOUR PSU EMAIL ADDRESS: smp6183@psu.edu
# DESCRIPTION OF ALGORITHM (APPROACH):
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS (NOT INCLUDING MAIN) IN THIS SECTION
def optimizeRevenue(r,s,i):
    bd = -1
    bs = -1
    br = -1
    sales = 0
    for d in range(1,r):
        sales = int(s + ( s * ( i * d ) ) )
        rev = (r-d)*sales
        print('$',d,sales,'$',rev,end='')
        if rev > br:
            br = rev
            bs = sales
            bd = d
            print('-> New optimum',end='')
        print()
    return (bd,bs,br)

# END OF FUNCTION DEFINITIONS
#------------------------------------------------
# DO NOT MODIFY ANYTHING BELOW HERE!
def main():
    r = int(input("Enter normal retail price (whole dollars): "))
    print(r)
    s = int(input("Enter normal weekly sales: "))
    print(s)
    i = int(input("Enter sales increase per dollar discount (e.g. 5 = 5%): "))
    print(i)
    best = optimizeRevenue(r, s, i/100)
    print("Optimal discount: $", best[0])
    print("Will result in", best[1], "sales")
    print("and $", best[2], "revenue.")
if __name__ == "__main__":
    main()

