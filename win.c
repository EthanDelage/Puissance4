#include <stdio.h>
#include <stdlib.h>

#include "gestion.h"

int	vertical_win(char grille[6][7], int player_play)
{
	int	column;
	int	count;
	char	pion;

	column = 0;
	count = 0;
	pion = pion_played(player_play);
	while (column < 7)
	{
		while (count < 3)
		{
			if (pion == grille[count][column] &&
				pion == grille[count + 1][column] &&
				pion == grille[count + 2][column] &&
				pion == grille[count + 3][column])
			{
				return (1);
			}
		}
		count = 0;
	}
	return (0);
}

int	horizontal_win(char grille[6][7], int player_play)
{
	int	row;
	int	count;
	char	pion;

	row = 0;
	count = 0;
	pion = pion_played(player_play);
	while (row < 6)
	{
		while (count < 4)
		{
			if (pion == grille[row][count] &&
				pion == grille[row][count + 1] &&
				pion == grille[row][count + 2] &&
				pion == grille[row][count + 3])
			{
				return (1);
			}
		}
		count = 0;
	}
	return (0);
}
