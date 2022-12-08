#include "char_array.h"
#include "game.h"
#include "restart.h"
#include "total_point.h"
#include <stdio.h>

int main(void) {
	char a[3][3] = {{'0', '0', '0'}, {'0', '0', '0'}, {'0', '0', '0'}};
	printf("Appuyez sur S pour commencer\n");
	char i;
	char d;
	scanf("%s", &i);

	if ((int)i == 83 || (int)i == 115) {
		init_grid(a, '-');
		display_grid(a);
		int c;
		int f = 0;
		while (1) {
			int x;
			int y;

			char joueur1 = 'X';
			char joueur2 = 'O';
			printf("Jouez joueur 1\n");

			scanf("%d %d", &x, &y);

			if (a[x][y] != '-') {
				printf("Choissisez un autre endroit");
				scanf("%d %d", &x, &y);
			}

			update_grid(a, joueur1, x, y);
			display_grid(a);
			f++;
			int b = test_win(a, 'X');

			if (b == 1) {
				c = printf(
					"Le joueur 1 a gagné !!!   Score:%d", score(joueur1));

				printf("\n");
				printf("Voulez-vous continuer ? O/N\n");
				scanf("%s", &d);
				if ((int)d == 79 || (int)d == 111) {
					restart_game(a);
					b = 0;
					f = 0;
				} else {
					printf("fin de jeu");
					break;
				}
			}

			if (f == 9) {
				c = printf("Match nul");
				printf("Voulez-vous continuer ? O/N\n");
				scanf("%s", &d);
				if ((int)d == 79 || (int)d == 111) {
					restart_game(a);
					b = 0;
					f = 0;
				} else {
					printf("fin de jeu");
					break;
				}
			}

			printf("Jouez joueur 2\n");

			scanf("%d %d", &x, &y);
			if (a[x][y] != '-') {
				printf("Choissisez un autre endroit");
				scanf("%d %d", &x, &y);
			}
			update_grid(a, joueur2, x, y);
			display_grid(a);
			f++;
			int c = test_win(a, 'O');

			if (c == 1) {
				c = printf(
					"Le joueur 2 a gagné!!!  Score: %d   ", score(joueur2));
				printf("\n");
				printf("Voulez-vous continuer ? O/N\n");
				scanf("%s", &d);
				if ((int)d == 79 || (int)d == 111) {
					restart_game(a);
					c = 0;
					f = 0;
				} else {
					printf("fin de jeu");
					break;
				}
			}
		}
	}
}
