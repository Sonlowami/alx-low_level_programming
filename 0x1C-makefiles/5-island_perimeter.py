#!/usr/bin/python3
"""Find the island perimenter"""


def island_perimeter(grid):
    """Find the island of the perimeter"""
    temp = 0
    height, width = 0, 0
    for row in grid:
        for i in row:
            if i == 1:
                temp += 1
        if temp > height:
            height = temp

    i = 0
    temp = 0
    while i < 100:
        j = 0
        while j < len(grid[0]):
            if grid[j][i] == 1:
                temp += 1
        if temp > width:
            width = temp
    return 2*(height + width)
