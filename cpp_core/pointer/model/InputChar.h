#include <string>
using namespace std;

class CharInput {

public:
	string character; 

public:
    void add(char c) {
		character += c;
	}

	std::string getValue() {
		return character;
	}
};