#!/usr/bin/python3
"""Module to know a perimeter"""


def island_perimeter(grid):
    """Return of perimeter to any island in a grid"""
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            data = grid[i][j]
            init = 4
            if data == 1:
                if i != len(grid) - 1 and grid[i + 1][j] == 1:
                    init -= 1
                if i != 0 and grid[i - 1][j] == 1:
                    init -= 1
                if j != len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    init -= 1
                if j != 0 and grid[i][j - 1] == 1:
                    init -= 1
                perimeter += init
    return perimeter
