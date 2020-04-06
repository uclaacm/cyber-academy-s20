#include <string>
using namespace std;

int main() {
	string s = "ucl";
	int size = s.size();
	for (int i = 0; i < size; i++) {
		s += "a";
	}
	return s.size();
}
