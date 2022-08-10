#include<stdio.h>
#define WATER 3.0e-23
#define G 950
int main()
{
	puts("Please delete  \'*\' and \'/\'  to use the program!");
	//   1.c
	/**************************************************************
	int a = 7732176000;
	float b = 1e10;
	int i;
	do{
		a++;
		printf("%d\t",a);
	}while(a>0);
	**************************************************************/
	//   2.c
	/**************************************************************
	int a;
	printf("Please input a num  of ASCII:");
	scanf("%d",&a);
	printf("The number is char '%c'!\n",a);
	**************************************************************/
	//   3.c
	/**************************************************************
	printf("\a");
	printf("Startled by the sudden ,Sally shouted,\n");
	printf("By the  Great Pumpkin ,what was that!\n");
	**************************************************************/
	//   4.c
	/**************************************************************
	double a;
	printf("Enter a floating-point value:");
	scanf("%lf",&a);
	printf("fixed-point notatiom:%lf\n",a);
	printf("exponential notation:%e\n",a);
	printf("p notation:%0xlfp\n",a);
	**************************************************************/
	//   5.c
	/**************************************************************
	double age;
	printf("Please input your age:");
	scanf("%lf",&age);
	printf("The age is %.2lf second!\n",age*3.156e7);
	**************************************************************/
	//   6.c
	/**************************************************************
	double d_water;
	double count;
	printf("Please input the water's number:");
	scanf("%lf",&d_water);
	count = d_water * G / WATER;
	printf("The water is %lf !",count);
	**************************************************************/
	//   7.c
	/**************************************************************
	float cm;
	printf("Please input your body higher:");
	scanf("%f",&cm);
	printf("Your body higher is %.2f cm\n",cm*2.54);
	**************************************************************/
	//   8.c
	/**************************************************************
	float cups;
	printf("Please input your cups:");
	scanf("%f",&cups);
	printf("The pint is %.2f !\nThe ounce is %.2f !\nThe soup ladle is %.2f !\nThe tee ladle is %.2f!\n",
	cups/2.0,cups*8.0,cups * 16.0,cups * 48.0);
	**************************************************************/
	return 0;
}