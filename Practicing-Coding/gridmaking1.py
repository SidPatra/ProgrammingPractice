def buildgrid(w):
    grid = []
    for i in range(w):
        grid.append([])
        for j in range(w):
            grid[i].append('_')
            print(grid[i][j], end='|')
        print()
    return grid


def buildrow(g, n, c):

    for i in range(len(g)):
        for j in range(len(g)):
            if i == n-1:
                print(c,end='|')
            else:
                print(g[i][j],end='|')
        print()

def buildcol(g,n,c):

    for i in range(len(g)):
        for j in range(len(g)):
            if j == n-1:
                print(c,end='|')
            else:
                print(g[i][j],end='|')
        print()

def main():
    choose = 'Y'
    while choose != 'N':
        print('Enter the width of the square: ', end='')
        w = int(input())
        print(w)
        grid = buildgrid(w)
        print('Enter the character to fill with: ', end='')
        char = input()
        print(char)
        print('Enter (c)olumns or (r)ows: ', end='')
        corr = input()
        print(corr)
        if corr == 'r':
            print('Enter a row from 1 to 10: ', end='')
            num = int(input())
            print(num)
            buildrow(grid, num, char)
        elif corr == 'c':
            print('Enter a column from 1 to 10: ', end='')
            num = int(input())
            print(num)
            buildcol(grid, num, char)
        print('Continue (Y/N)? ',end='')
        choose = input()
        print(choose)

# MAKE SURE YOUR CODE BEGINS IN "MAIN"
if __name__ == "__main__":
    main()

