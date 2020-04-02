#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void encompress(char* plaintext) {
	int i = 0;
	while (plaintext[i] && plaintext[i+1]) {
		plaintext[i] += plaintext[i+1];
		i += 1;
	}
	plaintext[i] = 0;
}

int main(int argc, char** argv) {
	if (argc != 2) {
		printf("USAGE: %s <plaintext>\n", argv[0]);
		return 1;
	}
	encompress(argv[1]);
	printf("%s", argv[1]);
}
