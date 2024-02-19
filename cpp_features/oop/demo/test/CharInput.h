#include <string>
using namespace std;

class CharInput {

public:
	string character; 

public:
	virtual void add(char c) {
		character += c;
	}

	std::string getValue() {
		return character;
	}
};