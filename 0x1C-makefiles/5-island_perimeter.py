#!/usr/bin/python3
"""Module to know a perimeter"""


def island_perimeter(grid):
    """Return of perimeter to any island in a grid"""
    perimeter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[0])):
            if grid[i][j] == 1:
                total = 0
                if grid[i-1][j] == 0 or i == 0:
                    total += 1
                if grid[i+1][j] == 0 or i == (len(grid) - 1):
                    total += 1
                if grid[i][j-1] == 0 or j == 0:
                    total += 1
                if grid[i][j+1] == 0 or j == (len(grid[0]) - 1):
                    total += 1
                perimeter += total
    return (perimeter)
