#include <stdio.h>
#include <stdlib.h>

int	recup_column(int player, char grille[6][7])
{
	int	column;

	column = -1;
	while (column < 1 || column > 7 || grille[0][column - 1] != ' ')
	{
		printf("Joueur %d : ", player);
		scanf("%d", &column);
	}
	return (column - 1);
}

void	place_pion(char grille[6][7], int player)
{
	int	column;
	int	count;
	int	is_busy;

	column = recup_column(player, grille);
	count = 0;
	is_busy = 1;
	while (count < 6 && is_busy)
	{
		if (grille[5 - count][column] == ' ')
		{
			if (player == 1)
			{
				grille[5 - count][column] = 'X';
			}
			else
			{
				grille[5 - count][column] = 'O';
			}
			is_busy = 0;
		}
		count++;
	}
}

