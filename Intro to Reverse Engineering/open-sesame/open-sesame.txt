bool openSesame(string s) {
	string open;
	for (int i = 0; i < s.size(); i++) {
		if (s.at(i) == '9') {
			i--;
		}
		if (s.at(i) == 'a') {
			open += 'c';
		}
		if (s.at(i) == 's') {
			// do nothing
		}
		if (s.at(i) == '1') {
			open += s.substr(s.size() - 1, s.size());
		}
		if (s.at(i) == 'l') {
			open += s.at(0);
		}
		if (s.at(i) == '0') {
			open += 'u';
		}
		if (s.at(i) == 'e') {
			open += s.at(i);
		}
		if (s.at(i) == '7') {
			open += s.substr(i - 1, i);
		}
	}
	if (open == "success") {
		return true;
	}
	return false;
}