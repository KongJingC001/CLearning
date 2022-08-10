#include<stdio.h>
#include<string.h>
#include<math.h>
#define MOVE 5
int main()
{
	unsigned int i = 0;
	unsigned int a;
	char code[10] = "yangwuneng";
	a = strlen(code);
	/*
	printf("Enter the code:");
	scanf("%s", &code[a]);
	*/
	while(i < a)
	{
		code[i] += MOVE;
		i++;
	}
	printf("password is:\n%s\n", code);
	return 0;
}