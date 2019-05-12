#include <stdio.h>

#define OUT 0 // 在单词外
#define IN 1 // 在单词内

/*
1.测试
 1）没有任何输入，输出：0，0，0
 2）输入单字符单词，输出：1，1，2 (一个字母加上一个换行符）
 3）输入由两个字符组成的单词，输出：1，1，3
 4）输入两个单字符单词，同一行，输出：1，2，4; 各占一行，输出：2，2，4
2.那些满足边界条件的输入最有助于发现程序的错误，譬如：没有输入；没有单词（只有换行符或只有空格、制表符和换行符）；每个单词各占一行等等
*/
int main () {
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != '0') {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			++nw;
		}	
	}
	printf("%d %d %d\n", nl, nw, nc);
	return 0;
}
