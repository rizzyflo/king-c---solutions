#include <stdio.h>

int main(void) {
	int g1, g2;

	printf("Enter numerical grade: ");
	scanf_s("%1d%1d", &g1, &g2);

	switch (g1) {
		case 10: printf("Letter grade: A"); break;
		case 9: printf("Letter grade: A"); break;
		case 8: printf("Letter grade: B"); break;
		case 7: printf("Letter grade: C"); break;
		case 6: printf("Letter grade: D"); break;
		case 5: case 4: case 3: case 2:
		case 1: printf("Letter grade: F"); break;
		default: printf("Invalid grade entered"); break;
	}

	return 0;

}
