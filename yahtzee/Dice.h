#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Dice {

public:
	int face_number{};

	int roll_dice();
	void get_number(int &face_number);
	Dice();
};