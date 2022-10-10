#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>

#include "Gark.h"
#include "Player.h"
#include "Mesa.h"
#include "Game.h"
#include "globals.h"
#include "History.h"

using namespace std;

History::History(int nRows, int nCols)
	: h_mesa_rows(nRows), h_mesa_cols(nCols), Attacknumchar(46)//, h_mesa{nRows, nCols}
{

	//Mesa h_mesa(nRows, nCols);

	
	
	int r, c;


	// Fill the grid with dots . 
	for (r = 0; r < nRows - 1; r++) 
	{
		for (c = 0; c < nCols - 1; c++)
			{
			grid1[r][c] = char(Attacknumchar);
			}
	}
	
}

bool History::record(int r, int c)
{

	if (r > h_mesa_rows)
	{

		return false;
	}

	if (c > h_mesa_cols)
	{
		return false;
	}
	else 
	{
		if (grid1[r][c] == '.')
		{
			grid1[r][c] = char((grid1[r][c]) + 19);
		}
		else if (grid1[r][c] != '.')
		{
			grid1[r][c] = char((grid1[r][c]) + 1);
		}


		return true;
	}
	


}

void History::display() const
{

	clearScreen();

	for (int r = 0; r < h_mesa_rows; r++)
	{
		for (int c = 0; c < h_mesa_cols; c++)
		{
		cout << grid1[r][c];
		cout << endl;
		}
	}
	cout << endl;





}

