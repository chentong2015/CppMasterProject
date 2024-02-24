#include <string>

class CharInput {

public:
	std::string character = "test";

    void add(char c) {
		character += c;
	}

	std::string getValue() {
		return character;
	}
};