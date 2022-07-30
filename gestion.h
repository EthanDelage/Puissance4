/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestion.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelage <edelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:59:31 by edelage           #+#    #+#             */
/*   Updated: 2022/07/30 17:18:16 by edelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GESTION_H

void	initialiser_grille(char grille[6][7]);
int	full_grid(char top_line[]);
int	player(int turn);
char	pion_played(int player_played);
int	play(char grille[6][7]);

#endif
