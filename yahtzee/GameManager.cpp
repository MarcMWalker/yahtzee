#include "Dice.h"
#include "Dice_Print.h"
#include "GameManager.h"

GameManager::GameManager() {}

void GameManager::start() {
	bool playGame = true;
	cout << "Press R to roll dice " << endl;
	while (playGame = true) {

		static int turn{ 1 };
		switch (letter_to_uppercase()) {
		case 'R':
		{

			cout << endl;
			cout << "Turn " << turn << endl;
			diceOne.roll_dice();
			diceTwo.roll_dice();
			diceThree.roll_dice();
			diceFour.roll_dice();
			diceFive.roll_dice();
			turn++;
			break;
		}
		default:
			cout << "Press R to roll dice" << endl;
		}
	}
}

char GameManager::letter_to_uppercase() {
	char letter{};
	cin >> letter;
	return toupper(letter);
}


void GameManager::rules() {
	cout << "The game consists of a number of rounds. In each round, a player gets \n" 
		"three rolls of the dice, although they can choose to end their turn after \n" 
		"one or two rolls. After the first roll the player can save any dice they want \n"
		"and re-roll the other dice. This procedure is repeated after the second roll. \n" 
		"The player has complete choice as to which dice to roll. They can re-roll a die \n"
		"for the third roll that was not rolled on the second roll. \n" << endl <<

		"The Yahtzee scorecard contains 13 different category boxes and in each round, \n" 
		"after the third roll, the player must choose one of these categories. The \n" 
		"score entered in the box depends on how well the five dice match the scoring \n" 
		"rule for the category.Details of the scoring rules for each category are given \n"
		"below.As an example, one of the categories is called Three of a Kind.The scoring \n"
		"rule for this category means that a player only scores if at least three of the \n"
		"five dice are the same value.The game is completed after 13 rounds by each player, \n"
		"with each of the 13 boxes filled.The total score is calculated by summing all thirteen \n"
		"boxes, together with any bonuses. \n" << endl << 

		"The Yahtzee scorecard contains 13 scoring boxes divided between two sections: the upper section and the lower section. " << endl;
};