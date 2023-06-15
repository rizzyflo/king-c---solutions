#include <stdio.h>

int main(void) {
	int user_number, last_digit;

	printf("Enter a number: ");
	scanf_s("%d", &user_number);

	while (user_number != 0) {
		last_digit = user_number % 10;
		user_number /= 10;
		printf("%d", last_digit);
	}

	return 0;
}
