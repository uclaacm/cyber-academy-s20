bool magic(int x) {
	int y = x % 8;
	if (y < 6) {
		x = x + 150;
	}
	else {
		x = x * 50;
	}

	if (x > 200) {
		y = x * 3;
	}
	else {
		y = x * 4;
	}
	if (y == 2469) {
		return true;
	}
	return false;
}
