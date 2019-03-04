#include "Dice.h"
#include "Dice_Print.h"
#include "GameManager.h"

int main() {
	bool game_over = false;
	GameManager Game{};

	while (game_over != true) {
		cout << "====================================================================================" << endl;
		cout << endl;
		cout << "Welcome to the Yahtzee game menu screen, please select an adequate option" << endl;
		cout << endl;
		cout << "P = Play Yahtzee" << endl;
		cout << "R = Instructions and Rules of Yahtzee" << endl;
		cout << "Q = Quit Game" << endl;
		cout << endl;
		cout << endl;
	
		switch (Game.letter_to_uppercase()) {
			case 'P':
			{
				Game.start();
				break;
			}
			case 'R':
			{
				Game.rules();
				break;
			}
			case 'Q':
			{
				game_over = true;
				cout << endl;
				cout << " " << "+++++++++++++++++++++++++++++++++++" << endl;
				cout << " " << "+         ***GOODBYE***" << "           +" << endl;
				cout << " " << "+++++++++++++++++++++++++++++++++++" << endl;
				break;
			}
			default:
				cout << "Enter one of the valid letters please" << endl;
		}
		cout << endl;
	}
	return 0;
}