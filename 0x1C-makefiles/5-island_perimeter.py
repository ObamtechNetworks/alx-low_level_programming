#!/usr/bin/python3
"""
This module defines a function that returns the perimeter \
        of and island
The island is described by a grid, the parameter of the function
Args:
    (grid) : a list of list of integers
"""


def island_perimeter(grid):
    """returns the perimeter of the island described by grid
    Args:
        (grid): a list of list of integers

    cases:
        0: represents a water zone
        1: represents a land zone
        one cell is a square with side length 1 (so four sides => 4)
    """
    '''
    check if it's a matrix (grid)
    Algorithm: create variable and set perimeter = 0
    iterate through each row of the grid
    for first row and element if it's land, assume perimter = 4
    having four sides
    then check for the other parts of the cell
    (right, 2nd row elem 1, 2n row right element)
    if it's a land for every adjacent check, subtract 1 from the perimeter
    '''

    perimeter = 0

    if not grid:
        return perimeter

    rows, cols = len(grid), len(grid[0])

    # enter through the rows
    for i in range(rows):
        # enter through the columns(each element in the rows)
        for j in range(cols):
            # check if first eleemnt in current cell is land
            if grid[i][j] == 1:
                perimeter += 4  # assume 4 sides initially

                # check the adjacent or neighbors if they are land too
                # subtract 1 frm perimeter for each adjacent that matches
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                # check below
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1

                # check element at the right
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1

                if j < cols - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

                # Check if the cell is on the edge
                if i == 0 or i == rows - 1 or j == 0 or j == cols - 1:
                    perimeter += 1
    return perimeter
