int main() {
	int s = 147;
	int count = 0;
	for (int i = 0; i < s; i++) {
		count++;
		if (i % 6 == 0) {
			s -= i;
		}
	}
	return count;
}
