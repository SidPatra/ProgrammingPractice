# YOUR NAME: Siddharth Patra
# YOUR PSU EMAIL ADDRESS: smp6183@psu.edu
# DESCRIPTION OF ALGORITHM (APPROACH):
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
import random


# END OF IMPORT STATEMENTS
# -----------------------------------------------
# USE THIS FUNCTION TO DETERMINE WHAT CHARACTER SHOULD
# GO IN A CELL. CALL THIS ONCE FOR EACH CELL ON THE BOARD
def marker(dimension):
    if (random.randrange(1000) % dimension) == 0:
        return '*'
    else:
        return ' '


# -----------------------------------------------
# DEFINE YOUR FUNCTIONS IN THIS SECTION
# -----------------------------------------------
# CREATEBOARD: Based on the size parameter, create and return a "list of lists",
# for example: [[' ', '*', ' '], [' ', ' ', ' '], ['*', '*', ' ']]

def createBoard(size):
    board = []
    for i in range(size):
        a = []
        for j in range(size):
            a.append(marker(size))
        board.append(a)
        a = []
    return board


# DISPLAYBOARD: Display the board to the screen in a format that matches
# the examples given.

def displayLine(board):
    for i in range(len(board) + 1):
        if i == 0:
            print('----|', end='')
        else:
            print('---|', end='')
    print()


def displayBoard(board):
    dim = int(len(board))
    print("      ", end="")
    for y in range(dim):
        print(chr(ord('A') + y), end=' | ')
    print()
    displayLine(board)
    for x in range(dim):
        print('%3d' % x, end=' | ')
        for y in range(dim):
            print(board[x][y], end=' | ')
        print()
        displayLine(board)


# ------------------------------------------------
# END OF FUNCTION DEFINITIONS
# ------------------------------------------------
# DO NOT MODIFY WHAT IS BELOW
def main():
    random.seed(0)  # Make sure the answers match the I/O tests
    size = 99999  # anything to get it started
    while size > 0:
        size = int(input("What size board do you want (3-15, enter 0 to stop)? "))
        # print(size)
        if (size > 2) and (size < 16):
            board = createBoard(size)
            displayBoard(board)

        elif (size < 0) or (size in [1, 2]) or (size > 15):
            print("Please pay attention!")
            size = 999999


if __name__ == "__main__":
    main()

