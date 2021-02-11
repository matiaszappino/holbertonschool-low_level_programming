#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """Function that returns the perimeter of an island"""
    counter = 0
    height = 0
    array = []
    for i in range(len(grid)):
        flag = 0
        counter = 0
        for x in range(len(grid[0])):
            if grid[i][x] == 1:
                counter += 1
                flag = 1
        if flag == 1 and counter != 0:
            array.append(counter)
        if flag == 1:
            height += 1
    width = max(array)
    return (width + height) * 2
