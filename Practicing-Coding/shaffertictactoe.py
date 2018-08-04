# YOUR NAME:
# YOUR PSU EMAIL ADDRESS:
# END OF COMMENTS
# ------------------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
# END OF IMPORT STATEMENTS
# =====================================================
# DEFINE YOUR FUNCTIONS IN THIS SECTION
# -----------------------------------------------------
# FUNCTION NAME: displayBoard
# INPUT: the board
# PROCESS: Put each value on the screen in "tic tac toe" board format
# OUTPUT: The board goes to the output, there is no return value
def filled(x):
    filscore = 0
    for i in range(9):
        if x[i] == 'X':
            filscore += 1
    if filscore == 9:
        return True
    else:
        return False


def displayBoard(x):
    for i in range(0, 9, 3):
        for j in range(3):
            print(x[i + j], end=' | ')
        if i != 8:
         print('')


# -----------------------------------------------------
# FUNCTION NAME: filled
# INPUT: the board
# PROCESS: Looks at each spot in the board
# OUTPUT: Return "True" if the board is full, "False" otherwise

# -----------------------------------------------------
# FUNCTION NAME: makeMove
# INPUT: the board, which position to place an "X"
# PROCESS: Checks that the board position is empty; if not, display a message, otherwise update the board
# OUTPUT: No output except perhaps the error message; no return value
# END OF FUNCTION DEFINITIONS
def makeMove(b, x):
   if (x < 1) and (x > 9):
      print('Out of range!')
   elif b[x-1] == 'X':
      print('That position is filled! Try again!')
   else:
      b[x-1] = 'X'
   '''
    if 9 >= x >= 1:
        if b[x-1] == x:
            b[x - 1] = 'X'
        else:
            #print('')
            print('That position is filled! Try again!')
           # print('')
            # displayBoard(b)
    else:
        print('Out of range!')
'''

# =====================================================
# MAIN PART OF THE PROGRAM


def main():
    board = ['_', '_', '_', '_', '_', '_', '_', '_', '_']
    for i in range(9):
      board[i]=i+1

    # print(board)
    # PROGRAM BEGINS HERE
    while not (filled(board)):
        displayBoard(board)
        # print(board)
        x = int(input("Enter move for x (1-9): "))
        print(x)
        if x < 1 or x > 9:
            print("Please enter a valid position number 1 through 9")
        else:
            makeMove(board, x)
    displayBoard(board)

    print("End of game!")


# INCLUDE THE FOLLOWING 2 LINES, BUT NOTHING BETWEEN HERE
if __name__ == "__main__":
    main()
# AND HERE
