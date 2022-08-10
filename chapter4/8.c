#include<stdio.h>
#include<string.h>
#include<float.h>
#define M 2
#define GALLON 3.785  //一加仑大约3.785升
int main()
{
	puts("Please delete \'*\' and \'/\'  to use progarm!");
	//   1.c
	/**************************************************************
	char name[10];
	char sex[5];
	printf("Please input your sex:");
	scanf("%s",sex);
	scanf("%*c");
	printf("Please input your name:");
	scanf("%s",name);
	printf("You are %s%s\n",sex,name);
	**************************************************************/
	//   2.c
	/**************************************************************
	char name[50];
	int a;
	printf("Please input your name:");
	scanf("%s",name);
	printf("Your name is \"%s\"\n",name);
	printf("Your name is \"%20s\"\n",name);
	printf("Your name is \"%-20s\"\n",name);
	printf("Your name is %s   \n",name);
	**************************************************************/
	//   3.c
	/**************************************************************
	double number;
	puts("Please enter a number:");
	scanf("%lf",&number);
	printf("a.The input is %.1lf or %.1e.\n",number,number);
	printf("b.The input is %+.3lf or %+.3e.\n",number,number);
	**************************************************************/
	//   4.c
	/**************************************************************
	double length;
	char *name;
	name = (char*)malloc(10,sizeof(char));
	printf("Please input your length:");
	scanf("%lf",&length);
	fflush(NULL);
	printf("Please input your name:");
	scanf("%s",name);
	fflush(NULL);
	printf("%s,you are %.3lf cm tall!",name,length);
	return 0;
	**************************************************************/
	//   5.c
	/**************************************************************
	float speed;
	float filesize;
	float time;
	printf("Sir Please input your dowmload speed and file\'s size:");
	scanf("%f%f",&speed,&filesize);
	time = filesize / speed;
	printf("At %.2f megabits per second,a file of %.2f megabytes!\n",speed,filesize);
	printf("downloads in %.2f seconds.\n",time);
	**************************************************************/
	//   6.c
	/**************************************************************
	int counts[M];
	char *name;
	char *surname;
	name = (char *)malloc(10,sizeof(char));
	surname = (char *)malloc(10,sizeof(char));
	printf("Please input your name:");
	scanf("%s",name);
	fflush(NULL);
	printf("Please input your surname:");
	scanf("%s",surname);
	counts[0] = strlen(name);
	counts[1] = strlen(surname);
	printf("%10s%7s\n",name,surname);
	printf("%10d%7d\n",counts[0],counts[1]);
	printf("%-10s%-10s\n",name,surname);
	printf("%-10d%-10d\n",counts[0],counts[1]);
	**************************************************************/
	//   7.c
	/**************************************************************
	double num1 = 1.0/3.0;
	float num2 = 1.0/3.0;
	printf("%-15.6lf\t%.6f\n",num1,num2);
	printf("%-15.12lf\t%.12f\n",num1,num2);
	printf("%-15.16lf\t%.16f\n",num1,num2);
	printf("%-15f\t%f",FLT_DIG,DBL_DIG);
	**************************************************************/
	//   8.c
	/**************************************************************
	const double mile = 1.609;
	double mileage; //里程
	double gasoline; //汽油量
	double speed;
	printf("Please input your mileages and gasoline:");
	scanf("%lf%lf",&mileage,&gasoline);
	mileage *= mile;
	gasoline *= GALLON;
	speed = mileage / gasoline; 
	printf("Your speed is %.2lf\n",speed);
	**************************************************************/
	
	return 0;
}