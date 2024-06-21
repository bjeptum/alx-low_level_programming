#!usr/bin/python
def island_perimeter(grid):
    """
    Finds the perimeter of the island described on the given grid

    Grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length
        Grid cells are connected horizontally/vertically (not diagonally)
        Grid is rectangular, width and height don’t exceed 100
        Grid is surrounded by water, there is one island (or nothing).
        The island doesn’t have “lakes"
        (water inside that isn’t connected to the water around the island)

    Args:
        grid (list): A list of lists of integers representing the island grid.

    Returns:
    int: The perimeter of the island
    """

    # Find dimensions of the grid
    width = len(grid)
    height = len(grid[0])

    perimeter = 0

    # Iterate over each section of the grid

    for i in range(width):
        for j in range(height):
            # if cell is land add to total preimeter, else none
            if grid[i][j] == 1:
                # Check left cell
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check right cell
                if j == height-1 or grid[i][j+1] == 0:
                    perimeter += 1
                # Check cell above
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check cells below
                if i == width-1 or grid[i+1][j] == 0:
                    perimeter += 1

    return perimeter
