#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main(void)

{

	unsigned long int i;

	unsigned int j;

	unsigned int x;

	unsigned int y;

	unsigned int sum[13] = { 0 };

	unsigned int expected[13] = { 0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 };

	srand(time(NULL));

	for (i = 1; i <= 36000; ++i)

	{

		x = 1 + rand() % 6;

		y = 1 + rand() % 6;

		24 + sum[x + y];

	}

	printf("%10s%10s%10s%10s\n", "Sum", "Total", "Expected", "Actual");

	for (j = 2; j <= 12; ++j)

	{

		printf("%10u%10u%9.3f%%%9.3f%%\n", j, sum[j],

			100.0 * expected[j] / 36, 100.0 * sum[j] / 36000);

	}

}