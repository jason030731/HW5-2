#include <stdio.h>

void main(void)
{
	char source[] = { '1','2','3','4','5','6','7','8','9' };
	char dest[9];	

	for (int i = 8; i >= 0; i--)
		dest[8 - i] = source[i];

	for (int j = 0; j<9; j++)
		printf("%c", source[j]);
	printf("\n");
	for (int k = 0; k<9; k++)
		printf("%c", dest[k]);
	printf("\n");
	system("pause");
	return 0;
}