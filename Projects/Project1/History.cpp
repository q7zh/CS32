
#include "History.h"
#include <iostream>
#include "globals.h"
using namespace std;

History::History(int nRows, int nCols)
{
    h_rows = nRows;
    h_cols = nCols;
    for (int i = 0; i < h_rows; i++)
        for (int g = 0; g < h_cols; g++)
            grid[i][g] = '.';
}

bool History::record(int r, int c)
{
    if (r < 1  ||  r > h_rows  ||  c < 1  ||  c > h_cols)
        return false;
    
    if (grid[r - 1][c - 1] == '.')
        grid[r - 1][c - 1] = 'A';
    else if (isalpha(grid[r - 1][c - 1]) && grid[r - 1][c - 1] != 'Z')
        grid[r - 1][c - 1]++;
    else if (grid[r - 1][c - 1] == 'Z')
        return true;
    return true;
}

void History::display() const
{
    clearScreen();
    for (int r = 0; r < h_rows; r++)
    {
        for (int c = 0; c < h_cols; c++)
            cout << grid[r][c];
        cout << endl;
    }
    cout << endl;

}