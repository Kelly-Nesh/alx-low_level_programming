#!/usr/bin/python3
"""Contains a function def island_perimeter(grid): that returns the
perimeter of the island described in grid:
"""


def get_width(grid):
    """
    returns the width of the island described in grid:
    """
    width = []
    count = 0
    for row in range(len(grid)):
        for cell in range(len(grid[row])):
            if grid[row][cell] == 1:
                count += 1
        width.append(count)
        count = 0
    width.sort()
    return width[-1]


def get_height(grid):
    """
    returns the height of the island described in grid:
    """
    height = []
    count = 0
    h = 0
    for row in range(len(grid[0])):
        for cell in grid:
            count += cell[h]
        h += 1
        height.append(count)
        count = 0
    height.sort()
    return height[-1]


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid:
    """
    return (get_width(grid) + get_height(grid)) * 2
