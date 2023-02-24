#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the given grid.
    Args:
   grid (list): A list of lists of integers representing the island grid.
   Returns:
    int: The perimeter of the island described in the grid.
    """
    # The dimensions of the grid
    rows = len(grid)
    cols = len(grid[0])

    # Initialization of the perimeter to 0
    perimeter = 0

    # Iterate over each cell in the grid
    for i in range(rows):
        for j in range(cols):
            """
            If the cell is land,
            add its perimeter contribution to the total perimeter
            """
            if grid[i][j] == 1:
                # Check the cell to the left
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check the cell to the right
                if j == cols-1 or grid[i][j+1] == 0:
                    perimeter += 1
                # Check the cell above
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check the cell below
                if i == rows-1 or grid[i+1][j] == 0:
                    perimeter += 1

    return perimeter
