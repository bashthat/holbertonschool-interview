1. Add the two grids
2. Check if the grid is stable
3. If not, topple the grid
4. Print the grid
5. Repeat
**A sandpile is considered stable when none of its cells contains more than 3 grains**

https://stackoverflow.com/questions/63420373/what-are-the-characteristics-of-an-abelian-sandpiles-for-a-grid-3-x-3

https://www.youtube.com/watch?v=diGjw5tghYU


 the sandpile array is declared as a global variable, which eliminates the need to use malloc to dynamically allocate memory. The add_sand function implements the rules for adding sand to the pile and collapsing the pile when it becomes unstable.
 the compute_sandpiles function takes two sandpile arrays as arguments and computes the next state of the sandpile by adding the contents of one pile to the other. The function uses the add_sand function to add sand to the pile and collapse the pile when it becomes unstable.
 =============================================
The process of solving a sandpile algorithm involves simulating the behavior of sand piles, where each cell in a grid can hold a certain number of sand grains. The goal is to create a stable sandpile, where each cell has a maximum of three grains of sand.

Here is a high-level overview of the process:

Initialize the grid: Set the number of sand grains in each cell to a specified value.

Check for instability: For each cell, if it has four or more grains of sand, it is considered unstable and a grain must be distributed to its four neighboring cells.

Distribute sand: For each unstable cell, distribute one grain of sand to each of its four neighboring cells.

Repeat steps 2 and 3 until all cells are stable: Keep repeating the check for instability and distribution of sand until all cells have three or fewer grains of sand.

Stable sandpile: When all cells are stable, the sandpile is considered to be in its final state.
=============================================================