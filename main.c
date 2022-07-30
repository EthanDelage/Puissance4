/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelage <edelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:50:51 by edelage           #+#    #+#             */
/*   Updated: 2022/07/30 18:16:49 by edelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "gestion.h"

int	main(int argc, char const *argv[])
{
	char	grille[6][7];

	play(grille);
	return (0);
}
