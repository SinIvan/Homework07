#include <stdio.h>

#define SIZE 30

void stringReverse(char strArray[]);

int main(void)

{

	int loop;

	char strArray[SIZE] = "Print this string backward.";

	for (loop = 0; loop < SIZE; ++loop)

	{

		printf("%c", strArray[loop]);

	}

	puts("");

	stringReverse(strArray);

	puts("");

}

void stringReverse(char strArray[])

{

	if (strArray[0] == '\0')

	{

		return;

	}

	stringReverse(&strArray[1]);

	printf("%c", strArray[0]);

}