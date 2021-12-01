#include <stdio.h>

#define SIZE 15

int binarySearch(int b[], int searchKey, int low, int high);

void printHeader(void);

void printRow(int b[], int low, int mid, int high);

int main(void)

{

	int a[SIZE];

	unsigned int i;

	int key;

	int result;

	for (i = 0; i < SIZE; ++i)

	{

		a[i] = 2 * i;

	}

	printf("%s", "Enter a number between 0 and 28: ");

	scanf_s("%d", &key);

	printHeader();

	result = binarySearch(a, key, 0, SIZE - 1);

	if (result != -1)

	{

		printf("\n%d found in array element %d\n", key, result);

	}

	else
	{

		printf("\n%d not found\n", key);

	}

}

int binarySearch(int b[], int searchKey, int low, int high)

{

	int middle;

	if (low <= high)

	{

		middle = (low + high) / 2;

		printRow(b, low, middle, high);

		if (searchKey == b[middle])

		{

			return middle;

		}

		else if (searchKey < b[middle])

		{

			return binarySearch(b, searchKey, low, middle - 1);

		}

		else

		{

			return binarySearch(b, searchKey, middle + 1, high);

		}

	}

	return -1;

}

void printHeader(void)

{

	unsigned int i;

	puts("\nSubscripts:");

	for (i = 0; i < SIZE; ++i)

	{

		printf("%3u ", i);

	}

	puts("");

	for (i = 1; i <= 4 * SIZE; ++i)

	{

		printf("%s", "-");

	}

	puts("");

}

void printRow(int b[], int low, int mid, int high)

{

	int i;

	for (i = 0; i < SIZE; ++i)

	{

		if (i < low || i > high)

		{

			printf("%s", " ");

		}

		else if (i == mid)

		{
			printf("%3d*", b[i]);

		}

		else

		{

			printf("%3d ", b[i]);

		}

	}

	puts("");

}