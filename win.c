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
			count++;
		}
		count = 0;
		column ++;
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
			count++;
		}
		count = 0;
		row++;
	}
	return (0);
}

int	up_diagonal_win(char grille[6][7], int player_play)
{
	int	column;
	int	count;
	char	pion;

	column = 6;
	count = 0;
	pion = pion_played(player_play);
	while (column > 2)
	{
		while (count < 3)
		{
			if (pion == grille[count][column] &&
				pion == grille[count + 1][column - 1] &&
				pion == grille[count + 2][column - 2] &&
				pion == grille[count + 3][column - 3])
			{
				return (1);
			}
			count++;
		}
		count = 0;
		column--;
	}
	return (0);
}

int	down_diagonal_win(char grille [6][7], int player_play)
{
	int	column;
	int	row;
	char	pion;

	column = 0;
	row = 0;
	pion = pion_played(player_play);
	while (column < 4)
	{
		while (row < 3)
		{
			if (pion == grille[row][column] &&
				pion == grille[row + 1][column + 1] &&
				pion == grille[row + 2][column + 2] &&
				pion == grille[row + 3][column +3])
			{
				return (1);
			}
			row++;
		}
		row = 0;
		column++;
	}
	return (0);
}

int	game_win(char grille[6][7], int player_play)
{
	if (vertical_win(grille, player_play))
	{
		return (1);
		printf("vertical");
	}
	else if (horizontal_win(grille, player_play))
	{
		return(1);
		printf("horiz");
	}
	else if (up_diagonal_win(grille, player_play))
	{
		return (1);
		printf("diag1");
	}
	else if (down_diagonal_win(grille, player_play))
	{
		return (1);
		printf("diag2");
	}
	else
	{
		return(0);
	}
}

