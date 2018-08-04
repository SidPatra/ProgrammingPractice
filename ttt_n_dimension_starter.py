# YOUR NAME:
# YOUR PSU EMAIL ADDRESS:
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
# END OF IMPORT STATEMENTS
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS (NOT INCLUDING MAIN) IN THIS SECTION
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
				# ADD LOGIC HERE!
            else:
                if filled(board, dimension):
					# ADD LOGIC HERE
                else:
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

