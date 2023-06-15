#include <stdio.h>

int main(void) {
	int numerator, denominator, lowest_terms;
	int number1, number2, remainder, GCD;

	printf("Enter a fraction: ");
	scanf_s("%d/%d", &numerator, &denominator);

	number1 = numerator;
	number2 = denominator;

	for (;;) {
		if (number2 == 0) {
			break;
		}
		remainder = number1 % number2;
		number1 = number2;
		number2 = remainder;
	}
	GCD = number1;

	numerator /= GCD;
	denominator /= GCD;

	printf("In lowest terms: %d/%d", numerator, denominator);

	return 0;
}
