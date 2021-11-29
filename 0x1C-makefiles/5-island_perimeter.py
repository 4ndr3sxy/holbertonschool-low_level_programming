#!/usr/bin/python3
"""Module to know a perimeter"""


def island_perimeter(grid):
    """Return of perimeter to any island in a grid"""
    count = 0
    perimeter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[0])):
            if grid[i][j] == 1:
                count += 1
    count = ((count - 2) * 2) + (2 * 3)
    perimeter = count
    return (perimeter)
