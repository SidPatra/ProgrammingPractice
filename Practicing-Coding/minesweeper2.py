# YOUR NAME: Siddharth Patra
# YOUR PSU EMAIL ADDRESS: smp6183@psu.edu
# DESCRIPTION OF ALGORITHM (APPROACH):
# Build markersize, createboard, and displayboard from before. Makemove is new.
# Make sure that if board[x][y] isn't a bomb, board[x][y] = 'X'
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
import math
import random


# END OF IMPORT STATEMENTS
# -----------------------------------------------
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS IN THIS SECTION

def marker(size):
    if random.randrange(1000) % size == 0:
        return '*'  # this is a bomb
    else:
        return ' '  # this is ok


def createBoard(size):
    board = []
    for i in range(size):
        tmpb = []
        for j in range(size):
            tmpb.append(marker(size))
        board.append(tmpb)
        tmpb = []
    return board


def displayLine(board):
    dim = len(board)
    for i in range(dim+1):
        if i == 0:
            print('----|', end='')
        else:
            print('---|', end='')
    print()


def displayBoard(board, hide=True):
    print('     ', end=' ')
    dim = len(board)
    for y in range(dim):
        print(chr(ord('A') + y), end=' | ')
    print()
    displayLine(board)
    for x in range(dim):
        print("%3d" % x, end=' | ')
        for y in range(dim):
            if hide == True:
                if board[x][y] != '*':
                     print(board[x][y], end=' | ')
                else:
                     print(' ',end=' | ')
            else:
               print(board[x][y], end=' | ')
        print()
        displayLine(board)

def makeMove(move, board):
    dim = len(board)
    moves = move.split(",")
    x = ord(moves[0])-ord('A')
    if x < 0 or x >= dim:
      print("Move \"%s\" is out of range" % move)
      return True
    y = int(moves[1])
    if y < 0 or y >= dim:
      print('Move \"%s\" is out of range' % move)
      return True
    if board[y][x] == '*':
         print('*****************************')
         print('******** B O O M ! **********')
         print('*****************************')
         return False
    board[y][x] = 'X'
    return True





# -----------------------------------------------
# ------------------------------------------------
# END OF FUNCTION DEFINITIONS
# ------------------------------------------------
# DO NOT MODIFY WHAT IS BELOW
def main():
    random.seed(0)  # Make sure the answers match the I/O tests
    size = 99999  # anything to get it started
    while size > 0:
        size = int(input("What size board do you want (3-15, enter 0 to stop)? "))
        print(size)
        if (size > 2) and (size < 16):
            board = createBoard(size)
            displayBoard(board, hide=True)
            move = "not empty"
            while move != "":
                move = input("Enter coordinate (e.g. \"A,15\") or empty string to stop: ")
                print(move)
                if len(move) > 0:
                    if makeMove(move, board):
                        displayBoard(board, hide=True)
                    else:
                        displayBoard(board, hide=False)
                        for x in range(10):
                            print()
                        print("*****************************")
                        print("******** NEW GAME! **********")
                        print("*****************************")
                        break
        elif (size < 0) or (size in [1, 2]) or (size > 15):
            print("Please pay attention!")
            size = 999999


if __name__ == "__main__":
    main()

