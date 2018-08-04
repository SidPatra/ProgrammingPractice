# YOUR NAME: Siddharth Patra
# YOUR PSU EMAIL ADDRESS: smp6183@psu.edu
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS (NOT INCLUDING MAIN) IN THIS SECTION

def displayBoard(board):
   cnt = 1
   numx = 0
   for r in range(3):
      for c in range(3):
         if board[(r*3)+c] == '_':
            print(cnt,end=' | ')
         else:
            print(board[(r*3)+c],end=' | ')
         cnt += 1
      print()

def filled(board):
   for x in board:
      if x == '_':
         return False
   return True

def makeMove(board, move, token):
   if board[move-1] != '_':
      print('That position is filled! Try again!')
      return False
   else:
      board[move-1] = token
      return True

def fullRow(board,which):
   for r in range(3):
      count = 0
      for c in range(3):
         if board[c+(r*3)] == which:
            count +=1
            if count == 3:
               return True
      count = 0
   return False

def fullCol(board,which):
   for i in range(0,3):
      count = 0
      for c in range(0,len(board),3):
         if board[c+i] == which:
            count += 1
      if count == 3:
         return True
   return False

def fullDiag1(board, which):
   i = 0
   while i < len(board):
      if board[i] != which:
         return False
   return True

def fullDiag2(board,which):
   i = 3-1
   while i < len(board)-1:
      if board[i] != which:
         return False
      i += 3-1
   return True


def fullDiag(board,which):
   return fullDiag1(board,which) or fullDiag2(board, which)

def winner(board, token):
   return fullDiag(board, token) or fullRow(board,token) or fullCol(board,token)

# END OF FUNCTION DEFINITIONS


# -----------------------------------------------
# MAIN PART OF THE PROGRAM -- DON'T CHANGE ANYTHING BELOW HERE!
def main():
    print("Play Tic-Tac-Toe!")
    board = ['_','_','_','_','_','_','_','_','_']
    token = 'X'
    gameOver = False
    while not gameOver:
        displayBoard(board)
        move = int(input("Enter a move for "+ token + " (1-9): "))
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

