#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#define SIZE 10

#define MAXRANGE 1000


int recursiveMinimum(int array[], int low, int high);

int main(void)

{

	int array[SIZE];


	int loop;

	int smallest;

	srand(time(NULL));

	for (loop = 0; loop < SIZE; ++loop)

	{

		array[loop] = 1 + rand() % MAXRANGE;

	}

	printf("Array members are:\n");

	for (loop = 0; loop < SIZE; ++loop)

	{

		printf(" %d ", array[loop]);

	}

	puts("");

	smallest = recursiveMinimum(array, 0, SIZE - 1);

	printf("\nSmallest element is: %d\n", smallest);

}
int recursiveMinimum(int array[], int low, int high)

{

	int min;

	if (low == high)

		return array[high];

	else

	{

		min = recursiveMinimum(array, low + 1, high);

		return array[low] < min ? array[low] : min;

	}

}