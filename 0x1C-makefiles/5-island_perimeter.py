#!/usr/bin/python3
"""Defines a perimeter island function"""

def island_perimeter(grid):
    """Returns the perimeter of the island in grid:
    Args:
    grid: is a list of list of integers
    0: water zone
    1: land zone
    One cell: square with a side length 1
    Grid is rectangular, width and height don’t exceed 100
    width = len(grid[0])
    height = len(grid)
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # if width & height = 1(land), check left
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # check right
                if j == len(grid[i])-1 or grid[i][j+1] == 0:
                    perimeter += 1
                # Check top
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check bottom
                if i == len(grid)-1 or grid[i+1][j] == 0:
                    perimeter += 1
    return perimeter
