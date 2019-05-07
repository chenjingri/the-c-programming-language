#include <stdio.h>

int main() {
	float fahr, celsius;
	int lower = 0;
	int upper = 300;
	int step = 20;
	celsius = lower;
	printf("%s\t%s\n", "Celsius", "Fahr");
	while (celsius <= upper) {
		fahr = (celsius * 9.0) / 5.0  + 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;	
	}
}
