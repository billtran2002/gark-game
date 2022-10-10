#ifndef HISTORY_H_
#define HISTORY_H_

#include "Gark.h"
#include "globals.h"
#include "Mesa.h"

class History
{
public:
	History(int nRows, int nCols);
	bool record(int r, int c);
	void display() const;

private:
	//need member to store locations of garks when attacked 
	//need member to store Data for each location
	//int hattack_row;
	//int hattack_col;

	int Attacknumchar;

	int h_mesa_rows;
	int h_mesa_cols;

	char grid1[MAXROWS][MAXCOLS];

	

	//Mesa* h_mesa;


};

#endif