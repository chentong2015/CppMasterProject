#include <string>

class CharInput {

public:
	std::string character = "test";

    virtual void add(char c) {
		character += c;
	}

	inline std::string getValue() const {
		return character;
	}
};