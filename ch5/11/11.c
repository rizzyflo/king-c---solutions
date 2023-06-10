#include <stdio.h>

int main(void) {
	int n1, n2;

	printf("Enter a two-digit number: ");
	scanf_s("%1d%1d", &n1, &n2);


	if (n1 == 1 && n2 == 1)
		printf("Eleven");
	else if (n1 == 1 && n2 == 0)
		printf("Ten");
	else if (n1 == 1 && n2 == 2)
		printf("Twelve");
	else if (n1 == 1 && n2 == 3)
		printf("Thirteen");
	else if (n1 == 1 && n2 == 4)
		printf("Fourteen");
	else if (n1 == 1 && n2 == 5)
		printf("Fifteen");
	else if (n1 == 1 && n2 == 6)
		printf("Sixteen");
	else if (n1 == 1 && n2 == 7)
		printf("Seventeen");
	else if (n1 == 1 && n2 == 8)
		printf("Eighteen");
	else if (n1 == 1 && n2 == 9)
		printf("Nineteen");
	else {
		switch (n1) {
		case 2: printf("Twenty"); break;
		case 3: printf("Thirty"); break;
		case 4: printf("Forty"); break;
		case 5: printf("Fifty"); break;
		case 6: printf("Sixty"); break;
		case 7: printf("Seventy"); break;
		case 8: printf("Eighty"); break;
		case 9: printf("Ninety"); break;
		}

		switch (n2) {
		case 1: printf(" one"); break;
		case 2: printf(" two"); break;
		case 3: printf(" three"); break;
		case 4: printf(" four"); break;
		case 5: printf(" five"); break;
		case 6: printf(" six"); break;
		case 7: printf(" seven"); break;
		case 8: printf(" eight"); break;
		case 9: printf(" nine"); break;
		}
	}
	
	return 0;

}
