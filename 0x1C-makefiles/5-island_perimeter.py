#!/usr/bin/python3
"""module for perimeter of island described in grid"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    breadth = len(grid[0])
    length = len(grid)
    i_length = 0
    # i_breadth = 0

    for lt in range(length):
        for b in range(breadth):
            if (grid[lt][b] == 1):
                i_length = i_length + 1
            # if (grid[lt][b-1] == 1 or grid[lt][b+1] == 1):
            # i_breadth = i_breadth + 1

    return (i_length + 1) * 2
