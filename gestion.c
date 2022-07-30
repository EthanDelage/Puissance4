#include <stdlib.h>
#include <stdio.h>

#include "gestion.h"
#include "input.h"
#include "affichage.h"
#include "win.h"

int	full_grid(char top_line[])
{
	int	count;

	count = 0;
	while (count < 7)
	{
		if (top_line[count] == ' ')
		{
			return (0);
		}
		count ++;
	}
	return (1);
}

int	player(int turn)
{
	if (turn % 2 == 0)
	{
		return (1);
	}
	else
	{
		return (2);
	}
}

char pion_played(int player_played)
{
	if (player_played == 1)
	{
		return ('X');
	}
	else
	{
		return('O');
	}
}

int	play(char grille[6][7])
{
	int	count;
	int	player_to_play;
	int	win;

	count = 0;
	win = 0;
	initialiser_grille(grille);
	while (!win && count < 42)
	{
		title();
		player_to_play = player(count);
		afficher_grille(grille);
		place_pion(grille, player_to_play);
		printf("\e[1;1H\e[2J");
		count++;
	}
}
