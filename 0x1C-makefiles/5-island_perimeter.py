#!/usr/bin/python3

""" returns the perimeter of the island described in grid"""
""" 0 represents a water zone, 1 represents a land zone"""


def island_perimeter(grid):

    """Grid is completely surrounded by water, and there is one island"""
    """Grid is rectangular, width and height dont exceed 100"""

    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if ((grid[x][y-1] == 0) and (grid[x][y+1] == 0)):
                    perimeter += 1
                if ((grid[x-1][y] == 0) or (grid[x+1][y] == 0)):
                    perimeter += 1
    perimeter = perimeter * 2
    return perimeter
