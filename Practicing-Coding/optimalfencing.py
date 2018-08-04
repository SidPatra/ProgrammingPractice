# YOUR NAME:
# YOUR PSU EMAIL ADDRESS:
# DESCRIPTION OF ALGORITHM (APPROACH):
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS (NOT INCLUDING MAIN) IN THIS SECTION
    # total length equation is 2x + y = t
    # y = -2x + t
    # max area is defined as: A = xy
    # hence, area = x(-2x + t)
    # max area is derivative of area = -2x^2 + tx
    # area' = -4x + t = 0
    # x = t/4
    # y = t - 2(t/4)
    # y = t/2
def optimalArea(t):
    if t < 3:
        print('Buy more fence!')
        return (0, 0)
    else:
        prev = (0,0)
        for x in range(1, t):
            y = t - (2*x)
            z = (x * 100) * (y * 100)
            if z > 0:
                print(x * 100, 'X', y * 100, '=', z)
            if prev[0] * prev[1] * 10000 < z:
                  prev = (x, y)
        return prev
# END OF FUNCTION DEFINITIONS
# ------------------------------------------------
# DO NOT MODIFY ANYTHING BELOW HERE!
def main():
    t = int(input("How many HUNDREDS of feet of fencing do you have? "))
    print(t)
    print("Given %d feet of fencing:" % (t * 100))
    answer = optimalArea(t)
    if (answer[0] != 0):
        print("The best design is a fence %d feet by %d feet, which is %d square feet." % (
        answer[0] * 100, answer[1] * 100, (answer[0] * 100) * (answer[1] * 100)))


if __name__ == "__main__":
    main()

