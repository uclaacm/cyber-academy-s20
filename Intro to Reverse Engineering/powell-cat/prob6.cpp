#include <string>
#include <iostream>
#include <cassert>
using namespace std;

int main() {
	string s = "powell cat";
	switch (s[7]) {
	case 'a':
		return 3;
	case 'b':
		return 9;
	case 'c':
		return 5;
	case 'd':
		return 1;
	default:
		return 0;
	}
}