#!/usr/bin/python3
"""Island Perimeter"""

def island_perimeter(grid):
    counter = 0
    counter_two = 0
    for i in grid[0]:
        flag = 0
        for x in range(len(grid)):
            if grid[i][x] == 1:
                counter += 1
                flag = 1
        if flag == 1:
            counter_two += 1
    return (counter + counter_two) * 2