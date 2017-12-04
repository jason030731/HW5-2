
#include <stdio.h>
#include <stdlib.h>
int array[12] = { 1,3,7,9,80,46,20,79,10,43,30,60 };
void recursiveMaximum(int num[]);
int main()
{
	recursiveMaximum(array[12]);
	system("pause");
	return 0;
}
void recursiveMaximum(int num[])
{
int highRating = 0;
int a;
for (a=0;a<12;a++)
{
	if (highRating < array[a])
	{
		highRating = array[a];
	}
}
printf("%d\n",highRating);
}