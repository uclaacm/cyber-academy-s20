#include <string>
#include <iostream>
#include <cassert>
using namespace std;

int main() {
	int total = 10;
	int counter = 0;
	if (total < 3) {
		counter++;
	}
	else {
		counter--;
	}
	if (counter == 1) {
		return 8;
	}
	return 3;
}