/* Starting in the top left corner of a 2x2  grid, and only being able to move to the right and down,
there are exactly  routes to the bottom right corner.
How many such routes are there through a 20x20  grid? */
#include <stdio.h>

long long calculate_routes(int n)
{

    long long int  grid[n+1][n+1];
    for (int i = 0; i < n+1;i++)
    {
        grid[i][0] = 1;
        grid[0][i] = 1;
    }
    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <= n;j++)
        {
            grid[i][j] = grid[i][j-1] + grid[i - 1][j];
        }
    }
    return grid[n][n];
}
int main()
{
    long long int routes = calculate_routes(20);
    printf("%lld", routes);

    return 0;
}
