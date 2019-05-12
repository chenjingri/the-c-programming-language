#include <stdio.h>
int main () {
	int c, ns, nt, nl;
	ns = nt = nl = 0;
	while ((c = getchar()) != '0') {
		if (c == ' ') {
			++ns;
		}
		if (c == '\t') {
			++nt;
		}
		if (c == '\n') {
			++nl;
		}
	}
	printf("%d %d %d\n", ns, nt, nl);
	return 0;
}
