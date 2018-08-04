# YOUR NAME: Siddharth Patra
# YOUR PSU EMAIL ADDRESS: smp6183@psu.edu
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS (NOT INCLUDING MAIN) IN THIS SECTION

def fillBoard(d):
    b = []
    for i in range(int(d * d)):
        b.append('_')
    return b

def displayBoard(b,d):
   l = 0
   for i in range(0,int(d**2),d):
      for j in range(d):
         if b[i+j] == '_':
            l = str(i +1+j)
            print('%2s' % l,end=' | ')
         else:
            l = str(b[i+j])
            print('%2s' % l,end=' | ')
      print()

def filled(b,d):
    return False

def makeMove(b,m,t,d):
    if b[m-1] == '_':
        b[m-1] = t
        return True
    else:
        print('Already filled')
        return False

def fullRow(b, t, d):
    z = 0
    sc = 0
    for i in range(0, int(d ** 2), d):
        for j in range(d):
            if j == 0 and b[i + j] != '_':
                z = b[i + j]
                pass
            elif b[i+j] == '_':
                break
            else:
                if z == b[i + j]:
                    sc += 1
                    if sc == d-1:
                        return True
        if sc < d-1:
            sc = 0
    return False

def fullCol(b,t,d):
    z = 0
    sc = 0
    for i in range(d):
        for j in range(i,int(d**2),d):
            if j == i and b[j] != '_':
                z = b[j]
                pass
            elif b[j] == '_':
                break
            else:
                if z == b[j]:
                    sc +=1
                    if sc == d-1:
                        return True
        if sc < d-1:
            sc = 0
    return False

def fullDiagL(b,t,d):
    z = 0
    sc = 0
    for i in range(0, int(d ** 2), d + 1):
        if i == 0 and b[i] != '_':
            z = b[i]
            pass
        else:
            if b[i] == z:
                sc+=1
                if sc == d-1:
                    return True
    if sc < d-1:
        return False

def fullDiagR(b,t,d):
    z = 0
    sc = 0
    for i in range(d - 1, int(d * d) - (d - 1), d - 1):
        if i == d-1 and b[i] != '_':
            z = b[i]
            pass
        else:
            if z == b[i]:
                sc +=1
                if sc == d-1:
                    return True
    if sc < d-1:
        return False

def fullDiag(b,t,d):
    return fullDiagL(b,t,d) or fullDiagR(b,t,d)

def winner(b,t,d):
    return fullRow(b,t,d) or fullCol(b,t,d) or fullDiag(b,t,d)

# YOU WILL NEED MOST OR ALL OF THE FUNCTIONS PREVIOUSLY WRITTEN
#------------------------------------------------
# NEW FUNCTION NAME: winner
# INPUT: the board, the token, the dimension
# PROCESS: Determine if the passed-in token wins the game
# OUTPUT: True if the passed-in-token wins the game, False otherwise
# NEW FUNCTION NAME: move
# INPUT: the board, the token, the dimension
# PROCESS: Make and process the next move
# OUTPUT: The next token (taking turns) AND whether or not the game is ove
def move(board, dimension, token):
    gameOver = False
    displayBoard(board, dimension)
    move = int(input("Enter a move for " + token + " (1-" + str(dimension*dimension) +"): "))
    print(move)
    if (move < 1) or (move > (dimension*dimension)):
        print("Move is out of range; try again.")
    else:
        if makeMove(board, move, token, dimension):
            if winner(board, token, dimension):
                print(token,'wins!')
                gameOver = True
                # ADD LOGIC HERE!
            else:
                if filled(board, dimension):
                    print('Board is full! No winner!')
                    # ADD LOGIC HERE
                else:
                    if token == 'X':
                        token = 'O'
                    else:
                        token = 'X'
                    # ADD LOGIC HERE
    return token, gameOver
# END OF FUNCTION DEFINITIONS
#------------------------------------------------
# MAIN PART OF THE PROGRAM -- DON'T CHANGE ANYTHING BELOW HERE!
#------------------------------------------------
def main():
    print("Play Tic-Tac-Toe!")
    dimension = int(input("What is the dimension of the board (3-12)? "))
    print(dimension)
    if (dimension < 3) or (dimension > 12):
        print("The dimension is out of range")
    else:
        board = fillBoard(dimension)
        token = 'X'
        gameOver = False
        while not gameOver:
            token, gameOver = move(board, dimension, token)
        displayBoard(board, dimension)
# INCLUDE THE FOLLOWING 2 LINES, BUT NOTHING ELSE BETWEEN HERE
if __name__ == "__main__":
    main()
# AND HERE

