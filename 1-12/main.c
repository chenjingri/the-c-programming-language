#include <stdio.h>

#define OUT 0
#define IN 1

int main () {
	int c, word, state;
	state = OUT;
	while ((c = getchar()) != '0') {
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
			putchar('\n');
		} else if (state == OUT) {
			state = IN;
			putchar(c);
		} else if (state == IN) {
			putchar(c);
		}
	}	
	return 0;
}
