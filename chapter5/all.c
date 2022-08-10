#include<stdio.h>
#include<string.h>
#define EXCHANGE 60
double Cube(double);
void Temperatures(double);
int main()
{
	puts("Please delete the \"*\" and \"/\" to use the program!");
	//   1.c    
	/**************************************************************
	double time = 1;
	while(time > 0)
	{
		printf("Please input some minutes(0  to quit):");
		scanf("%lf",&time);
		if(time <= 0)
			break;
		printf("The time is %.1lf hours.\n",time * 1.0/ EXCHANGE);
	}
	printf("Input error,progarm close!\n");
	****************************************************************/
	//   2.c
	/***************************************************************
	int num;
	int i;
	printf("Sir,Please input a number:");
	scanf("%d",&num);
	for(i = num;i < num + 10;i++)
		printf("%d ",i);
	putchar('\n');\
	***************************************************************/
	//   3.c
	/**************************************************************
	int inday = 1;
	int mouths;
	int days;
	while(inday > 0)
	{
		printf("Please input the days:");
		scanf("%d",&inday);
		if(inday <= 0)
		{
			printf("Input error ,progarm closed!\n");
			break;
		}
		mouths =  inday / 7;
		days = inday % 7;
		printf("This is %d mouths %d days.\n",mouths,days);

	}
	**************************************************************/
	//   4.c    //goto 语句的实现
	/**************************************************************
	double higher;  //厘米，英寸              
	goto b;
	a:printf("your higher is %.2lf cm or %.2lf unit!\n",higher,higher/2.54);
	b:printf("Please input your high:(unit is cm!)");
	scanf("%lf",&higher);	
	if(higher > 0) goto a;
	puts("********************************");
	puts("*                              *");
	puts("* Time have to more than zero! *");
	puts("*      Program  close!         *");
	puts("*                              *");
	puts("********************************");
	**************************************************************/
	//   5.c
	/**************************************************************
	int money = 0,sum = 0;
	int day;
	printf("Please input the days:");
	scanf("%d",&day);
	if(day <= 0)
	{
		puts("********************************");
		puts("*                              *");
		puts("* Time have to more than zero! *");
		puts("*      Program  close!         *");
		puts("*                              *");
		puts("********************************");
	}
	else
	{
		while(money++ < day)
			sum  += money; 
		printf("sum = %d\n",sum);
	}
	**************************************************************/
	//   6.c
	/**************************************************************
	int money = 0,sum = 0;
	int day;
	printf("Please input the days:");
	scanf("%d",&day);
	if(day <= 0)
	{
		puts("********************************");
		puts("*                              *");
		puts("* Time have to more than zero! *");
		puts("*      Program  close!         *");
		puts("*                              *");
		puts("********************************");
	}
	else
	{
		while(money++ < day)
			sum  += money*money; 
		printf("sum = %d\n",sum);
	}
	**************************************************************/
	//  7.c
    /**************************************************************
	double num;
	printf("Please input a num:");
	scanf("%lf",&num);
	printf("The num\'s cube is %.2lf!\n",Cube(num));
	**************************************************************/
	//   8.c
	/**************************************************************
	int num2;
	int num1;
	printf("Please an integer to serve as the second operand:");
	scanf("%d",&num2);  //输入第二个数据
	printf("Now enter the first operand:");
	scanf("%d",&num1);	//输入第一个数据
	printf("%d %% %d is %d\n",num1,num2,num1 % num2);
	while(1)
	{
		printf("Enter next number for first operand (<= 0 to quit):");
		scanf("%d",&num1);
		if(num1 <= 0)
			break;
		printf("%d %% %d is %d\n",num1,num2,num1 % num2);
	}
	puts("Done");
	***************************************************************/
	//   9.c
    /***************************************************************
	int test = 1;
	double tem;
	while(test==1)
	{
		printf("Please enter a temperature(unit is fahrenheit):");
		test = scanf("%lf",&tem);
		Temperatures(tem);
	}
	***************************************************************/
	return 0;
}
double Cube(double inum)
{
	return inum * inum * inum;
}
void Temperatures(double temp)
{
	const double celsius = 5.0/9.0 * (temp - 32.0);
	const double kelvin = celsius +273.16;
	printf("The celsius is %.2lf%%.\nThe kelvin is %.2lf%%.\n",celsius,kelvin);
	return;
}