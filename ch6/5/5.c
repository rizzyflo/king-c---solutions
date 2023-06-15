#include <stdio.h>

int main(void) {
	int user_number, last_digit;

	printf("Enter a number: ");
	scanf_s("%d", &user_number);

	last_digit = user_number % 10;
	printf("%d", last_digit);

	do {
		user_number /= 10;
		last_digit = user_number % 10;
		printf("%d", last_digit);

	} while (user_number / 10 != 0);

	return 0;
}
