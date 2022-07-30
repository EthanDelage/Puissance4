#include <stdio.h>
#include <stdlib.h>

void	title(void)
{
	printf("  ______   ______   ______   ______   ______   ______   ______   ______\n");
	printf(" /_____/  /_____/  /_____/  /_____/  /_____/  /_____/  /_____/  /_____/\n");
	printf(" /_____/  /_____/  /_____/  /_____/  /_____/  /_____/  /_____/  /_____/\n\n\n");
	printf("__________       __                                              _____\n");
	printf("\\______   \\__ __|__| ______ __________    ____   ____  ____     /  |  |\n");
	printf(" |     ___|  |  |  |/  ___//  ___\\__  \\  /    \\_/ ____/ __ \\   /   |  |_\n");
	printf(" |    |   |  |  |  |\\___ \\ \\___ \\ / __ \\|   |  \\  \\__\\  ___/  /    ^   /\n");
	printf(" |____|   |____/|__/____  /____  (____  |___|  /\\___  \\___  > \\____   |\n");
	printf("                        \\/     \\/     \\/     \\/     \\/    \\/       |__|\n\n");
	printf("  ______   ______   ______   ______   ______   ______   ______   ______\n");
	printf(" /_____/  /_____/  /_____/  /_____/  /_____/  /_____/  /_____/  /_____/\n");
	printf(" /_____/  /_____/  /_____/  /_____/  /_____/  /_____/  /_____/  /_____/\n\n\n");
}

//Separe deux lignes de pions
void	separateur(void)
{
	printf("+---+---+---+---+---+---+---+\n");
}

//Affiche une ligne
void	row(char grille[])
{
	int	count;

	count = 0;
	while (count <= 28)
	{
		if (count % 4 == 0)
		{
			printf("|");
		}
		else if (count % 4 == 2)
		{
			printf("%c", grille[count / 4]);
		}
		else
		{
			printf(" ");
		}
		count++;
	}
	printf("\n");
}

//Initialise la grille avec des vides dans chaque case
void	initialiser_grille(char grille[6][7])
{
	int	row;
	int	column;

	row = 0;
	while (row <= 6)
	{
		column = 0;
		while (column <= 7)
		{
			grille[row][column] = ' ';
			column++;
		}
		row++;
	}
}

void	afficher_grille(char grille[6][7])
{
	int	count;
	int	height;

	count = 0;
	height = 0;
	printf("\n");
	while (count <= 12)
	{
		if (count % 2 == 0)
		{
			separateur();
		}
		else
		{
			row(grille[height]);
			height++;
		}
		count++;
	}
	printf("  1   2   3   4   5   6   7\n\n");
}

