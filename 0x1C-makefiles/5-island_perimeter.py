#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """Function that returns the perimeter of an island"""

    if len(grid) == 0 or grid is None:
        return 0

    for lists in grid:
        for elem in lists:
            if type(elem) is not int:
                return

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
