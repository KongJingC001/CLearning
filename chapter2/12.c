#include<stdio.h>
void jolly();
void deny();
void br();
void ic();
void one_three();
void two();
#define NAME "QiangHao"
#define SEX "Cheng"
#define A "Smile!"
int main()
{
	puts("Please delete \'*\' and \'/\' to use the program!");
	//   1.c
	/**************************************************************
	printf("%s\t%s\n",NAME,SEX);
	printf("%s\n",NAME);
	printf("%s\n",SEX);
	printf("%s\t%s\n",NAME,SEX);
	**************************************************************/
	//   2.c
	/**************************************************************
	printf("Cheng HaoQiang\nHuBei\n");
	**************************************************************/
	//   3.c
	/**************************************************************
	int age = 17;
	printf("%d years--%d days\n",age,age*365);
	**************************************************************/
	//   4.c
	/**************************************************************
	jolly();
	jolly();
	jolly();
	deny();
	**************************************************************/
	//   5.c
	/**************************************************************
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf(",");
	printf("\n");
	br();
	printf("\n");
	**************************************************************/
	//   6.c
	/**************************************************************
	int toes = 10;
	printf("The start number is %d,number * 2 = %d,number ^ 2 = %d\n"
		,toes,2*toes,toes*toes);
	**************************************************************/
	//   7.c
	/**************************************************************
	int i,j;
	for(i = 0 ; i < 3;i++)
	{
		for(j  = 0 ; j < 3-i;j++)
		   printf("%s",A);
		printf("\n");
	}
	**************************************************************/
	//   8.c
	/**************************************************************
	printf("starting  now:\n");
	one_three();
	printf("done!\n");
	**************************************************************/
	return 0;
}
void jolly()
{
	printf("For,he's a jolly good fellow!\n");
}
void deny()
{
	printf("Which nobody can deny!\n");
}
void br()
{
	printf("Brazil,Russia");
}
void ic()
{
	printf("India,China");
}
void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}
void two()
{
	printf("two\n");
}	