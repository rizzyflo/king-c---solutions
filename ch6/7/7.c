#include <stdio.h>

int main(void) {
	int i, n, odd, square;

	printf("prints table of square.\n");
	printf("Enter number of entries: ");
	scanf_s("%d", &n);

	odd = 3;
	square = 1;

	for (i = 1; i <= n; i ++) {
		printf("\t%d\t%d\n", i, square);
		square = +odd;
		odd += 2;
	}

	return 0;
}
