# YOUR NAME:
# YOUR PSU EMAIL ADDRESS:
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS (NOT INCLUDING MAIN) IN THIS SECTION



def displayBoard(b):
    for i in range(0, 9, 3):
        for j in range(3):
            if b[i+j] == '_':
                print(i + j+1, end=' | ')
            else:
                print(b[i+j],end=' | ')
        print()


def makeMove(b, m, t):
    if b[m - 1] != 'X' and b[m - 1] != 'O':
        b[m - 1] = t
    else:
        print('Position is already filled! Try again!')


def filled(b):
    for i in range(len(b)):
        if b[i] == '_':
            return False
    return True


def fullCol(b, t):
    if (b[0] == t and b[3] == t and b[6] == t) or (b[1] == t and b[4] == t and b[7] == t) or (b[2] == t and b[5] == t and b[8] == t):
        return True
    else:
        return True


def fullRow(b, t):
    if (b[0]==t and b[1]==t and b[2]==t) or (b[3]==t and b[4]==t and b[5]==t) or (b[6]==t and b[7]==t and b[8]==t):
        return True
    else:
        return False


def fullDiag(b, t):
    return fullDiagl(b, t) or fullDiag2(b, t)


def winner(b, t):
    return fullDiag(b, t) or fullRow(b, t) or fullCol(b, t)


# END OF FUNCTION DEFINITIONS
# -----------------------------------------------
# MAIN PART OF THE PROGRAM -- DON'T CHANGE ANYTHING BELOW HERE!
def main():
    print("Play Tic-Tac-Toe!")
    board = ['_', '_', '_', '_', '_', '_', '_', '_', '_']
    token = 'X'
    gameOver = False
    while not gameOver:
        displayBoard(board)
        print(board)
        move = int(input("Enter a move for " + token + " (1-9): "))
        if (move < 1) or (move > 9):
            print("Move is out of range; try again.")
        else:
            if makeMove(board, move, token):
                if winner(board, token):
                    print(token + " wins!")
                    gameOver = True
                else:
                    if filled(board):
                        print("Board is full! No winner!")
                        gameOver = True
                    else:
                        if token == 'X':
                            token = 'O'
                        else:
                            token = 'X'
    displayBoard(board)


# INCLUDE THE FOLLOWING 2 LINES, BUT NOTHING ELSE BETWEEN HERE
if __name__ == "__main__":
    main()
# AND HERE

