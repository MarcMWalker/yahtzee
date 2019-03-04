#include "Dice.h"
#include "Dice_Print.h"
#include "GameManager.h"


Dice::Dice(){}

int Dice::roll_dice(){
	int dice_num{1 + rand()/((RAND_MAX + 1)/6)};
	cout << dice_num << endl;
	return dice_num;
}

void Dice::get_number(int &face_Number) {
	cout << face_number << endl;
}
