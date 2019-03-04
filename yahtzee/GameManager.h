#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class GameManager {

public:
	int total_players{};
	size_t turn{1};
	bool winner{false};
	
	Dice diceCollection[5];
	Dice diceOne{};
	Dice diceTwo{};
	Dice diceThree{};
	Dice diceFour{};
	Dice diceFive{};

	GameManager();
	void start();
	void rules();
	void scoreBoard();
	char letter_to_uppercase();
};

