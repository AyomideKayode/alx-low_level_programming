#!/usr/bin/python3

"""
Module for Island Perimeter
"""


def island_perimeter(grid):
    """
    island_perimeter function calculates the perimeter of the island
    described in the grid.

    Parameters:
    - grid: List of lists of integers representing the island.
            0 represents a water zone.
            1 represents a land zone.

    Returns:
    - Perimeter of the island.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Assuming a land cell contributes 4 to the perimeter
                perimeter += 4

        # Check neighboring cells and subtract 1 for each adjacent land cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
