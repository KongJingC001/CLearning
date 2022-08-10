#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{
	int i, j, k, temp;
	int a[N] = {1, 5, 16, 9, 7, 14, 23, 10, 11, 2};
	for(i = 0; i < N; i++)
		printf("%4d", a[i]);
	putchar('\n');
	for(i = 0; i < N - 1; i++)
	{
			for(j = 0; j < N - i - 1; j++)
			{
				if(a[j] < a[j + 1])
				{
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
			printf("The %d times:\n", i + 1);
			for(k = 0; k < N; k++)
				printf("%4d", a[k]);
			puts("");
	}
	printf("The result data array after:\n");
	for(i = 0; i < N; i++)
		printf("%4d", a[i]);
	printf("\n");
	getchar();
	return 0;
}

#undef N