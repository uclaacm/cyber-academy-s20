#include <string>
#include <string.h>
#include <iostream>

char reference[21] = "this_is_not_the_flag";

int average(int a, int b) {
	return (a + b) / 2;
}

int main() {

	for (int i = 0; i < 20; i++) {
		reference[i] = average(reference[i], 20 - 1 - i);
	}

	std::cout << "What is the password?" << std::endl;

	std::string guess_str;
	std::cin >> guess_str;

	char guess[100];
	strncpy(guess, guess_str.c_str(), sizeof(guess));

	if (strcmp(guess, reference) == 0) {
		std::cout << "You got it! Wrap that password in flag{..} and submit it!" << std::endl;
	} else {
		std::cout << "Incorrect, try again" << std::endl;
	}
}

// answer: C==A7;@5<<>3=7514713