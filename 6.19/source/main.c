#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 13

int main(void)
{
	int face;
	int roll;
	int sum;
	int a, b;
	int frequency[SIZE] = { 0 };

	srand(time(NULL));

	for (roll = 1; roll <= 36000; roll++)
	{
		face = 1 + rand() % 6;
		a = face;
		face = 1 + rand() % 6;
		b = face;
		sum = a + b;
		++frequency[sum];
	}
	printf("%s%17s\n", "Face", "Frequency");

	for (face = 1; face < 13; face++)
	{
		printf("%4d%17d\n", face, frequency[face]);
	}
	system("pause");
	return 0;
}