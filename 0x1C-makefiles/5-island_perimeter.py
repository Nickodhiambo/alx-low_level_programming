#!/usr/bin/python3
"""Contains a fuction `island perimeter` that calculates perimeter
of an island represented as a grid passed as an arg
"""


def island_perimeter(grid):
    """Calculates the perimeter of a grid representing an island"""
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    if not grid:
        perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4

                if (i > 0 and grid[i - 1][j] == 1):
                    perimeter -= 2

                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter -= 2

    return perimeter
