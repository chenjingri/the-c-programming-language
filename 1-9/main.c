#include <stdio.h>

#define NONSPACES 'a'
int main () {
	int c, temp;
	temp = NONSPACES;
	while ((c = getchar()) != '0') {
		if (c != ' ') {
			putchar(c);
		}
		if (c == ' ') {
			if (temp != ' ') {
				putchar(c);
			}
		}
		temp = c;
	}	
}
