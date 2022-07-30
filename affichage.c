/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelage <edelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:41:12 by edelage           #+#    #+#             */
/*   Updated: 2022/07/30 19:05:23 by edelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

void	end_game(char grille[6][7], int last_player, int win)
{
	afficher_grille(grille);
	if (win)
	{
		printf("Bravo joueur %d, vous avez gagne !\n", last_player);
	}
	else
	{
		printf("La partie est finit, et personne n'a gagne\n");
	}
}
