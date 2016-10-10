
#ifndef HISTORY_INCLUDED
#define HISTORY_INCLUDED

#include "globals.h"

class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
    
private:
    int h_rows;
    int h_cols;
    char grid[MAXROWS][MAXCOLS];
};

#endif // HISTORY_INCLUDED