#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <fstream>
#include "json.hpp"
using json = nlohmann::json;

class UTILS {
public:
	struct Card {
		Card(int input) {

		}
	};

	struct DEALER {
		std::vector<std::string, int> deck;
		int totalAmount;
	};

	struct PLAYERS {
		std::vector<std::string, int> deck;
		int totalAmount;
	};


};