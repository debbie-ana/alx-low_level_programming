#!/usr/bin/python3
"""module for perimeter of island described in grid"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    breadth = len(grid[0])
    length = len(grid)
    perimeter = 0

    for lt in range(length):
        for b in range(breadth):
            if (grid[lt][b] == 1):
                count = 0
                if (lt > 0 and grid[lt-1][b]):
                    count += 1
                if (b > 0 and grid[lt][b-1]):
                    count += 1
                if (lt < length - 1 and grid[lt+1][b]):
                    count += 1
                if (b < breadth - 1 and grid[lt][b+1]):
                    count += 1
                perimeter += (4 - count)

    return (perimeter)
