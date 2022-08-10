#include<stdio.h>
#include<string.h>
#define M 26
#define DENBAR 150
double Eight_unit(double,double);
int main()
{
	puts("Please delete the \"*\" and \"/\" to use the program!");
	//   1.c
	/***************************************************************
	char words[M];
	int i,j = 0;
	for(i = 'a';i < M +'a';i++)
	{
		words[j] = i;
		j++;
	}
	for(i = 0;i < M;i++)
		printf("%3c",words[i]);
	putchar('\n');
	***************************************************************/
	//   2.c
	/***************************************************************
	int i,j;
	for(i = 0;i < 5;i++)
	{
		for(j = 0 ; j <= i;j++)
			putchar('$');
		putchar('\n');
	}
	***************************************************************/
	//   3.c
	/***************************************************************
	char word = 'F';
	int i,j;
	for(i = 0 ; i < 6;i++)
	{
		for(j = 0; j < i + 1;j++)
			printf("%c",word - j);
		putchar('\n');
	}
	***************************************************************/
	//   4.c
	/***************************************************************
	char word = 'A';
	int i,j;
	for(i = 0;i < 6;i++)
	{
		for(j = 0 ; j < i + 1;j++)
			printf("%c",word++);
		putchar('\n');
	}
	***************************************************************/
	//   5.c
	/***************************************************************
	char word;
	int num;
	int i,j,k,m;
	printf("Please enter a letter:");
	scanf("%c",&word);
	num = (int)word - 65;
	fflush(NULL);
	printf("%d\n",num);
	for(i = 0 ; i < num + 1 ;i++)
	{
		for(j = 0 ;j < num - i;j++)
			putchar(' ');
		for(k = 0 ; k < i + 1;k++)
			printf("%c",'A'+ k);
		for(m = 0 ; m < i;m++)
			printf("%c",'A' + i -m -1);
		putchar('\n');
	}
	**************************************************************/
	//   6.c
	/**************************************************************
	int max,min;
	int temp;
	int i,j;
	int length;
	printf("Please input the excel max and min:");
	scanf("%d%d",&max,&min);
	min > max?temp = max,max = min,min = temp:1;
	length = max - min;
	printf("|%5s|%5s|%5s|\n","初始","平方","立方");
	for( i = 0 ; i < length;i++)
	{
		for(j =0;j < 3;j++)
		{
			printf("|%5d|%5d|%5d|\n",min,min * min,min * min * min);
			min++;
		}	
	}
	**************************************************************/
	//   7.c
	/**************************************************************
	int i =0;
	int index;
	char words[10000];
	printf("Please enter a words:");
	scanf("%s",words);
	index = strlen(words);
	for(i = index ; i >= 0;i--)
		printf("%c",words[i]);
	putchar('\n');
	**************************************************************/
	//   8.c
	/**************************************************************
	double num1,num2;
	int test; 
	printf("Please enter two numbers:");
	test = scanf("%lf%lf",&num1,&num2);
	while(test)
	{
		if(num1 <= 0 || num2 <= 0)
			break;
		printf("The result is %lf\n",(num1 - num2)/(num1 * num2));
		printf("Please enter two numbers:");
		test = scanf("%lf%lf",&num1,&num2);
	}
	puts("*************************************");
	puts("*                                   *");
	puts("*           Enter Error!            *");
	puts("*                                   *");
	puts("*************************************");
	**************************************************************/
	//    9.c
	/**************************************************************
	double num1,num2;
	int test; 
	printf("Please enter two numbers:");
	test = scanf("%lf%lf",&num1,&num2);
	while(test)
	{
		if(num1 <= 0 || num2 <= 0)
			break;
		printf("The result is %lf\n",Eight_unit(num1,num2));
		printf("Please enter two numbers:");
		test = scanf("%lf%lf",&num1,&num2);
	}
	puts("*************************************");
	puts("*                                   *");
	puts("*           Enter Error!            *");
	puts("*                                   *");
	puts("*************************************");
	**************************************************************/
	//   10.c
	/**************************************************************
	int max,min;
	int temp;
	int test;
	do{
		printf("Please input the max and min:");
		test = scanf("%d%d",&max,&min);
		min > max?temp = max,max = min,min = temp:1;
		if(!test)
			break;
		puts("--------------------------");
		printf("|%8s|%8s|%6s|\n","excel","square","cube");
		puts("--------------------------");
		while(min != max)
		{
			printf("|%8s|%8d|%6d|\n","number",min,min * min);
			puts("--------------------------");
			min++;
		}
	}while(test);
	puts("*************************************");
	puts("*                                   *");
	puts("*           Enter Error!            *");
	puts("*                                   *");
	puts("*************************************");
	**************************************************************/
	//   11.c
	/**************************************************************
	int test;
	int i = 0;
	int numbers[8];
	char num[8][10] = {
		"first","second","third","fourth",
		"fifth","sixth","seventh","eighth"
	};
	printf("Please enter eight number!\n");
	do{
		printf("Please enter %s number:",num[i]);
		test = scanf("%d",&numbers[i]);
		i++;
		if(test == 0)
			break;
	}while(test && i < 8);
	for(i = 7; i >= 0;i--)
	{
		if(!test)
		{
			puts("*************************************");
			puts("*                                   *");
			puts("*           Enter Error!            *");
			puts("*                                   *");
			puts("*************************************");
			break;
		}
		puts("The result is:");
		printf("%d\t",numbers[i]);
	}
	putchar('\n');
	**************************************************************/
	//   12.c
	/**************************************************************
	int count;
	int i;
	int test = 1;
	double one = 1.0;
	double deno = 2.0;
	double an = 1.0,bn = 1.0;
	while(test)
	{
		printf("Please enter the count:");
		test = scanf("%d",&count);
		if(!test)
			break;
		for(i = 0 ;  i < count;i++)
		{		
			an += 1.0 / deno;
			bn += one / deno;
			one *= -1.0;
			deno += 1.0;
		}
		printf("The result is an = %15.10lf,bn = %15.10lf\n",an,bn);
	}
	puts("*************************************");
	puts("*                                   *");
	puts("*           Program Stop!           *");
	puts("*                                   *");
	puts("*************************************");
	**************************************************************/
	//   13.c
	/**************************************************************
	int i;
	int number[8];
	int num  = 2;
	for(i = 0 ; i < 8;i++)
	{
		number[i] = num;
		num *= 2;
	}
	i = 0;
	do{
		printf("%d\t",number[i]);
	}while( ++i < 8);
	putchar('\n');
	**************************************************************/
	//   14.c
	/**************************************************************
	int i;
	double num1[8];
	double num2[8];
	char num[8][10] = {
		"first","second","third","fourth",
		"fifth","sixth","seventh","eighth"
	};
	puts("Please enter eight number!");
	for(i = 0 ; i < 8;i++)
	{
		printf("Enter the %s number:",num[i]);
		scanf("%lf",&num1[i]);
	}
	num2[0] = num1[0];
	for( i = 1; i < 8 ;i++)
	{
		num2[i] = num2[i - 1] + num1[i];
	}
	puts("The first numbers is:");
	for(i  = 0 ;  i < 8; i++)
		printf("%5.2lf",num1[i]);
	putchar('\n');
	puts("The second numbers is:");
	for(i  = 0 ;  i < 8; i++)
		printf("%.2lf\t",num2[i]);
	putchar('\n');
	**************************************************************/
	//   15.c
	/**************************************************************
	int i;
	int length;
	char a[50];
	puts("Please enter some words:");
	scanf("%s",a);
	length = strlen(a);
	a[length] = '\0';
	for(i = length - 1 ; i >= 0;i--)
	{
		printf("%c",a[i]);
	}
	putchar('\n');
	**************************************************************/
	//   16.c
	/**************************************************************
	int count = 0;
	double dollar = 100;
	double Daphne_sum = 100;
	double Deirfre_sum = 100;
	while(Deirfre_sum <= Daphne_sum)
	{
		count++;
		Daphne_sum += dollar * 0.1;
		Deirfre_sum *= 1.05;
	}
	printf("In %d years,Deirfre\' money more than Daphne\' money.\n",
		count);
	printf("Deirfre\'money is $%.2lf,Daphne\'money is $%.2lf\n",
	Deirfre_sum,Daphne_sum);
	**************************************************************/
	//   17.c
	/**************************************************************
	int year  = 0;
	double dollar = 100;
	while(dollar > 0)
	{
		dollar *= 1.08;
		dollar -= 10;
		year++;
	}
	printf("In %d years,the bank\'money will be stop!\n",year);
	**************************************************************/
	//  18.c
	/**************************************************************
	int week = 1;
	int fri_num = 5;
	while(1)
	{
		fri_num -= week;
		fri_num *= 2;
		puts("************************************");
		if(fri_num > 150)
			break;
		printf("* In %d week,Rabnud\'friends is%4d. *\n",week,
		fri_num);
		week++;
	}
	**************************************************************/
	return 0;
}
double Eight_unit(double a,double b)
{
	return (a-b)/(a*b);
}