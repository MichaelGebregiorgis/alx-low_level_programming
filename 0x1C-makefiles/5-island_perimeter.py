#!/usr/bin/python3
"""grid"""


def island_perimeter(grid):
    """return island perimeter"""
    wid = len(grid[0])
    hgt = len(grid)
    bound = 0
    size = 0

    for h in range(hgt):
        for w in range(wid):
            if grid[h][w] == 1:
                size = size + 1
                if (w > 0 and grid[h][w - 1] == 1):
                    bound = bound + 1
                if (h > 0 and grid[h - 1][w] == 1):
                    bound = bound + 1
    return (size * 4 - bound * 2)
