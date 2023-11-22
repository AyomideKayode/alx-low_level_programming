Problem Statement:

- We are given a rectangular grid representing an island.

- The grid consists of 0s and 1s, where:
  - 0 represents a water zone.
  - 1 represents a land zone.

- The cells are connected horizontally and vertically, not diagonally.

- The grid is completely surrounded by water.

- There is only one island (or nothing).

- The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

- We need to calculate the perimeter of the island.

Approach:

- Iterate through each cell in the grid.
- If a cell contains 1 (land), assume it contributes 4 to the perimeter.
- Check neighboring cells, and subtract 1 for each adjacent land cell.

[see code](../5-island_perimeter.py)

Code Walkthrough:

1. Initialize perimeter to 0: This variable will be used to accumulate the perimeter of the island.

2. Nested Loop through the Grid:

- `for i in range(len(grid)):`: Loop through each row.
- `for j in range(len(grid[0])):`: Loop through each column.

3. Check if the Cell is Land:

- `if grid[i][j] == 1:`: If the current cell contains land, assume it contributes 4 to the perimeter.

4. Check Neighboring Cells:

- `perimeter += 4`: Start by assuming the current land cell contributes 4 to the perimeter.
- Check neighboring cells (up, down, left, right) and subtract 1 for each adjacent land cell.
  - `if i > 0 and grid[i - 1][j] == 1:`: Check the cell above.
  - `if i < len(grid) - 1 and grid[i + 1][j] == 1:`: Check the cell below.
  - `if j > 0 and grid[i][j - 1] == 1:`: Check the cell to the left.
  - `if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:`: Check the cell to the right.

5. Return the Final Perimeter: Return the accumulated perimeter.