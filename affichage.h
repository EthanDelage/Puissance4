/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelage <edelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:56:04 by edelage           #+#    #+#             */
/*   Updated: 2022/07/30 18:59:38 by edelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFFICHAGE_H

void	separateur(void);
void	row(char grille[]);
void	afficher_grille(char grille[6][7]);
void	end_game(char grille[6][7], int last_player, int win);

#endif
