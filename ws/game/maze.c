#include<stdio.h>
#include<iso646.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
void game(void) {
	char map[10][11] = {
			"##########",
			"#   o    #",
			"#        #",
			"#        #",
			"#        #",
			"#        #",
			"#        #",
			"#        #",
			"#        #",
			"##########"
	};
	short int coord[2] = { 1,4 };
	while (not(map[8][4] == 'o')) {
		system("cls");
		for (int i = 0; i <= 9; i++) puts(map[i]);
		switch (_getch()) {
		case 'W':
		case'w':
		UP:
			if (coord[0] >= 1 and coord[0] <= 9 and not(map[(coord[0] - 1)][coord[1]] == '#') ) {
				map[coord[0]][coord[1]] = ' ';
				map[(coord[0] - 1)][coord[1]] = 'o';
				coord[0]--;
			}
			break;
		case 'S':
		case's':
		DOWN:
			if (coord[0] >= 0 and coord[0] <= 8 and not(map[(coord[0] + 1)][coord[1]] == '#') ) {

				map[coord[0]][coord[1]] = ' ';
				map[coord[0] + 1][coord[1]] = 'o';
				coord[0]++;
			}
			break;
		case 'A':
		case'a':
		LEFT:
			if (coord[1] >= 1 and coord[1] <= 9 and not(map[coord[0]][(coord[1] - 1)] == '#') ) {

				map[coord[0]][coord[1]] = ' ';
				map[coord[0]][coord[1] - 1] = 'o';
				coord[1]--;
			}
			break;
		case 'D':
		case'd':
		RIGHT:
			if (coord[1] >= 0 and coord[1] <= 8 and not(map[coord[0]][(coord[1] + 1)] == '#') ) {

				map[coord[0]][coord[1]] = ' ';
				map[coord[0]][coord[1] + 1] = 'o';
				coord[1]++;
			}
			break;
		case 0:
		case 224:
			switch (_getch()) {
			case 72:
				goto UP;
				break;
			case 80:
				goto DOWN;
				break;
			case 75:
				goto LEFT;
				break;
			case 77:
				goto RIGHT;
			default:
				break;
			}
		default:
			break;
		}
	}
	system("cls");
	for (int i = 0; i <= 9; i++) puts(map[i]);
	system("pause");
}
int main(void) {
	game();
	return 0;
}
