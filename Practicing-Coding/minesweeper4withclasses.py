# YOUR NAME:
# YOUR PSU EMAIL ADDRESS:
# DESCRIPTION OF ALGORITHM (APPROACH):
# END OF HEADER INFORMATION
# -----------------------------------------------
# PLACE ANY NEEDED IMPORT STATEMENTS HERE:
import math
import random


# END OF IMPORT STATEMENTS
# -----------------------------------------------
# -----------------------------------------------
# DEFINE YOUR FUNCTIONS IN THIS SECTION
# -----------------------------------------------
# ALL FUNCTIONS MUST GO IN THIS CLASS:
class Minesweeper:
    def marker(self, size):
        if random.randrange(1000) % size == 0:
            return '*'  # this is a bomb
        else:
            return ' '  # this is ok

    def __init__(self, size):
        self.board = []
        for i in range(size):
            tmpb = []
            for j in range(size):
                tmpb.append(self.marker(size))
            self.board.append(tmpb)
            tmpb = []

    def displayLine(self):
        dim = len(self.board)
        for i in range(dim + 1):
            if i == 0:
                print('----|', end='')
            else:
                print('---|', end='')
        print()

    def winner(self):
        for i in range(len(self.board)):
            if ' ' not in self.board[i]:
                pass
            else:
                return False
        print('***********************************')
        print('********** W I N N E R ! **********')
        print('***********************************')
        return True

    def displayNum(self, y, x):
        num = 0
        dim = len(self.board)
        if y != 0:  #
            if x != 0:  # excludes top left corner
                if self.board[y - 1][x - 1] == '*':
                    num += 1
            if x != dim - 1:  # excludes top right corner
                if self.board[y - 1][x + 1] == '*':
                    num += 1
            if self.board[y - 1][x] == '*':  # checks * above
                num += 1
        if y != dim - 1:
            if x != 0:  # excludes bottom left corner
                if self.board[y + 1][x - 1] == '*':
                    num += 1
            if x != dim - 1:  # excludes bottom right corner
                if self.board[y + 1][x + 1] == '*':
                    num += 1
            if self.board[y + 1][x] == '*':  # checks * below
                num += 1
        if x != 0:  # for col >= 1
            if self.board[y][x - 1] == '*':
                num += 1
        if x != dim - 1:  # for col <= dim-1
            if self.board[y][x + 1] == '*':
                num += 1

        return num

    def displayBoard(self, hide=True):  # edit this
        print('     ', end=' ')
        dim = len(self.board)
        for y in range(dim):
            print(chr(ord('A') + y), end=' | ')
        print()
        self.displayLine()
        for x in range(dim):
            print("%3d" % x, end=' | ')
            for y in range(dim):
                if hide == True:
                    if self.board[x][y] != '*':
                        print(self.board[x][y], end=' | ')
                    else:
                        print(' ', end=' | ')
                else:
                    print(self.board[x][y], end=' | ')
            print()
            self.displayLine()

    def makeMove(self, move):
        dim = len(self.board)
        moves = move.split(",")
        x = ord(moves[0]) - ord('A')
        if x < 0 or x >= dim:
            print("Move \"%s\" is out of range" % move)
            return True
        y = int(moves[1])
        if y < 0 or y >= dim:
            print('Move \"%s\" is out of range' % move)
            return True
        if self.board[y][x] == '*':
            print('*****************************')
            print('******** B O O M ! **********')
            print('*****************************')
            return False
        self.board[y][x] = self.displayNum(y, x)
        return True


# END OF CLASS
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
            game = Minesweeper(size)
            game.displayBoard(hide=True)
            move = "not empty"
            while move != "":
                move = input("Enter coordinate (e.g. \"A,15\") or empty string to stop: ")
                print(move)
                if len(move) > 0:
                    if game.makeMove(move):
                        if game.winner():
                            game.displayBoard(hide=False)
                            break
                        else:
                            game.displayBoard(hide=True)
                    else:
                        game.displayBoard(hide=False)
                        break
            for x in range(10):
                print()
            print("*****************************")
            print("******** NEW GAME! **********")
            print("*****************************")
        elif (size < 0) or (size in [1, 2]) or (size > 15):
            print("Please pay attention!")
            size = 999999


if __name__ == "__main__":
    main()

