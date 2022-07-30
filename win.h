#ifndef WIN_H
# define WIN_H

int	vertical_win(char grille[6][7], int player_play);
int	horizontal_win(char grille[6][7], int player_play);
int	up_diagonal_win(char grille[6][7], int player_play);
int	down_diagonal_win(char grille[6][7], int player_play);
int	game_win(char grille[6][7], int player_play);

#endif
