/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelage <edelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:00:00 by edelage           #+#    #+#             */
/*   Updated: 2022/07/30 17:00:11 by edelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WIN_H

int	vertical_win(char grille[6][7], int player_play);
int	horizontal_win(char grille[6][7], int player_play);
int	up_diagonal_win(char grille[6][7], int player_play);
int	down_diagonal_win(char grille[6][7], int player_play);
int	game_win(char grille[6][7], int player_play);

#endif
