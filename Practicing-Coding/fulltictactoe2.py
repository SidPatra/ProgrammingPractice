# YOUR NAME:
# YOUR PSU EMAIL ADDRESS:
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS (NOT INCLUDING MAIN) IN THIS SECTION

def displayBoard(b):
   for i in range(0,9,3):
      for j in range(3):
         if b[i+j] == '_':
            print(i+1+j,end=' | ')
         else:
            print(b[i+j],end=' | ')
      print()

def filled(b):
    for i in range(9):
        if b[i] == '_':
            return False
    return True

def makeMove(b,m,t):
    if b[m-1] == '_':
        b[m-1] = t
        return True
    else:
        print('Already filled')
        return False

def fullRow(b,t):
    if (b[0] == t and b[1] == t and b[2] == t) or (b[3] == t and b[4] == t and b[5] == t) or (b[6] == t and b[7] == t and b[8] == t):
        print('Full row')
        return True
    else:
        return False
'''
    for i in range(0,9,3):
        sc = 0
        for j in range(3):
            if b[i+j] != '_':
                if j == 0:
                    #z = b[i+j]
                    pass
                else:
                    if b[i+j] == b[i+j-1]:
                        sc += 1
            else:
                break
        if sc == 2:
            print('Full row')
            return True
    return False
'''

def fullCol(b,t):
    if (b[0] == t and b[3] == t and b[6] == t) or (b[1] == t and b[4] == t and b[7] == t) or (b[2] == t and b[5] == t and b[8] == t):
        print('fullCol')
        return True
    else:
        return False
'''    z = 0
    l = 0
    sc = 0
    for i in range(0,3):
        for j in range(0,9,3):
            if i+j in range(0,3):
                if b[i+j] != '_':
                    z = b[i+j]
                else:
                    break
            else:
                if z == b[i+j]:
                    sc +=1
                    if sc == 2:
                        print('Full Col')
                        return True
    return False
'''
def fullDiagl(b,t):
    if b[0] == t and b[4] == t and b[8] == t:
        print('Full diagL')
        return True
    else:
        return False

def fullDiagr(b,t):
    if b[2] == t and b[4] == t and b[6] == t:
        print('Full diagR')
        return True
    else:
        return False


def fullDiag(b,t):
    return fullDiagl(b,t) or fullDiagr(b,t)

def winner(b,t):
    return fullRow(b,t) or fullCol(b,t) or fullDiag(b,t)
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

