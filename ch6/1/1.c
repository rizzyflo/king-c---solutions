#include <stdio.h>

int main(void) {
	float f, f_test, largest_number;

	printf("Enter a number: ");
	scanf_s("%f", &f);

	f_test = 0;
	while (f != 0){
		if (f > f_test) {
			f_test = f;
		}

		printf("Enter a number: ");
		scanf_s("%f", &f);
	}
	largest_number = f_test;

	printf("The largest number entered was %0.2f", largest_number);

	return 0;
}
