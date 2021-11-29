#!/usr/bin/python3
"""Module to know a perimeter"""


def island_perimeter(grid):
    """Return of perimeter to any island in a grid"""
    total = 0
    horizontal = 0
    vertical = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[0])):
            if grid[i][j] == 1:
                if grid[i][j-1] == 1:
                    horizontal += 1
        if horizontal > 1:
            horizontal += 1
            total += horizontal
        horizontal = 0
    for i in range(0, len(grid[0])):
        for j in range(0, len(grid)):
            if grid[j][i] == 1:
                if grid[j-1][i] == 1:
                    vertical += 1
        if vertical > 1:
            vertical += 1
            total += vertical
        vertical = 0
    return (total * 2)
