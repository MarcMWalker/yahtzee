#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Player {
private:
	string name{};
	size_t player_num{};
public:
	size_t score{};
	size_t position{};
	size_t turn{};
};
