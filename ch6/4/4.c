#include <stdio.h>

int main(void) {
	float trade_value, commission{};

	printf("Enter value of trade: ");
	scanf_s("%f", &trade_value);

	while (trade_value != 0) {
		if (trade_value < 2500.00f)
			commission = 30.00f + .017f * trade_value;
		else if (trade_value < 6500.00f)
			commission = 56.00f + .0066f * trade_value;
		else if (trade_value < 20000.00f)
			commission = 76.00f + .0034f * trade_value;


		printf("Commission: %0.2f\n", commission);
		printf("Enter value of trade: ");
		scanf_s("%f", &trade_value);
	}

	return 0;
}
