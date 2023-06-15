#include <stdio.h>

int main(void) {
	int user_number, i;

	printf("Enter a number: ");
	scanf_s("%d", &user_number);

	for (i = 1; i <= user_number; i++) {
		if (i % 2 == 0) {
			if ((i*i) <= user_number) {
				printf("%d\n", i*i);

			}
		}
	}

	return 0;
}
