#include <stdio.h>

int main(void) {
	int number1, number2, remainder, GCD;

	printf("Enter two integers: ");
	scanf_s("%d%d", &number1, &number2);

	for (;;) {
		remainder = number2 % number1;
		number1 = number2;
		number2 = remainder;

		if (number2 == 0) {
			break;
		}
	}

	GCD = number1;
	printf("Greatest common divisor: %d", GCD);

	return 0;
}
