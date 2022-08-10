#include"search.h"
double min(double a,double b)
{
	return a > b? b:a;
}
void Program_one()
{
	double result;
	result = min(2.23+2.36,3-6.52-8);
	printf("result is %.2lf\n",result);
}
void chline(char a,int b,int c)
{
	int i,j;
	for(i = 0 ; i < c;i++)
	{
		for( j = 0 ;j < b;j++)
			putchar(a);
		putchar('\n');
	}
}
void Program_two()
{
	chline('&',3,2);
}
void Three_ch(char ch,int num1,int num2)
{
	int i,j;
	for(i = 0 ; i < num2;i++)
	{
		for( j = 0 ;j < num1;j++)
		{
			putchar(ch);
			putchar('\t');
		}
		putchar('\n');
	}
}
void Program_three()
{
	char in_ch;
	int number1,number2;
	printf("Please enter a character:");
	in_ch = getchar();
	printf("Please enter two number:");
	scanf("%d%d",&number1,&number2);
	puts("The character matrix is:");
	Three_ch(in_ch , number1 , number2);
}
double Calculate_2(double a,double b)
{
	return 1 / ( ( 1 / a + 1 / b ) / 2.0 );
}
void Program_four()
{
	double average;
	double num1,num2;
	printf("Please enter two number:");
	scanf("%lf%lf",&num1,&num2);
	average = Calculate_2(num1,num2);
	printf("The result is :%.4lf\n",average);
}
void Exchange(double* max,double* min)
{
	double temp;
	if(* max < * min)
	{
		temp = *max;
		*max = *min;
		*min = temp;
	}
}
void Program_five()
{
	double number1,number2;
	printf("Please enter two number:");
	scanf("%lf%lf",&number1,&number2);
	printf("The original first number is %.2lf and second number is %.2lf.\n",number1,number2);
	Exchange(&number1 , &number2);
	printf("The large value is %.2lf and small value is  %.2lf\n",number1,number2);
}
void Exch_3(double* a,double* b,double* c)
{
	double temp;
	if(*a < *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
	if(*a < *c)
	{
		temp = *a;
		*a = *c;
		*c = temp;
	}
	if(*b < *c)
	{
		temp = *b;
		*b = *c;
		*c = temp;
	}
}
void Program_six()
{
	double num1 = 12.65,num2 = 95.36,num3 = -12.3;
	puts("The original number order is:");
	puts("First = 12.65 Second = 95.36 Third = -12.3");
	Exch_3(&num1,&num2,&num3);
	puts("Later exchange number is:");
	printf("First = %.2lf Second = %.2lf Third = %.2lf\n",num1,num2,num3);
}
int Ret_place(char ch)
{
	int place = -1;
	if( (ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A') )
	{
		if(ch <= 'z' && ch >= 'a')
			ch -= 32;
		place = ch - 64;
	}
	return place;
}
void Program_seven()
{
	int m_place;
	char m_ch;
	printf("Please enter a character:");
	m_ch = getchar();
	putchar(m_ch);
	putchar('\n');
	m_place = Ret_place(m_ch);
	if(m_place == -1)
		puts("The character not is a letter.");
	else
		printf("The place is %d.\n",m_place);
}
double Power(double number,int a)
{
	int i;
	double multi_num = 1;
	if(number == 0)
	{
		if(a == 0)
			puts("The 0^0 is not defined.");
		else
			multi_num = 0;
	}
	else
		for(i = 0;i < a;i++)
			multi_num *= number;
	return multi_num;
}
void Program_eight()
{
	printf("%.2lf^%d is %.2lf\n",-14.2,3,Power(-14.2,3) );
}
double Recursion(double num,int n)   //递归函数
{
	double result = 1.0;
	if(num == 0 && n== 0)
	{
		puts("Undefined!");
		return 1;
	}
	if(n > 0)
	{
		if(n == 1 )
			return num;
		else
			result = Recursion(num,n-1) * num;
		return result;
	}
	else
		if(n == 0)
			return 1;
		else
		{
			if(n == -1)
				return 1.0 / num;
			else
				result =1.0 / Recursion(num,n+1) * num;
			return 1.0 / result;
		}
}
void Program_nine()
{
	const double a = 0;   //修改此处数值计算
	const int b = 0;
	printf("%.2lf^%d is %.4lf\n",a,b,Recursion(a,b) );
}
void To_base_n(unsigned int num,unsigned int sys_num)
{
	int r;
	r = num % sys_num;
	if(num >= sys_num)
		To_base_n(num / sys_num,sys_num);
	else
	{
		printf("%d",r);
		putchar('\n');
		return;
	}
	printf("%d",r);
}
void Program_ten()
{
	const unsigned int result = 8;
	const unsigned int system = 8;
	printf("The %d exchange %d system is:",result,system);
	To_base_n(result,system);
}
unsigned long Fibonacci(unsigned n)
{
	if(n > 2 )
		return Fibonacci(n - 1) + Fibonacci(n-2);
	else
		return 1;
}
void Fibona_circu(unsigned n)
{
	unsigned i;
	unsigned num_1 = 1,num_2 = 1,num_3;
	printf("%d\t%d\t",num_1,num_2);
	for(i = 0 ; i < n;i++)
	{	
		num_3 = num_1 + num_2;
		printf("%d\t",num_3);
		num_1 = num_2;
		num_2 = num_3;
	}
}
void Program_eleven()
{
	short unsigned int i;
	const unsigned int count = 20;
	for(i = 1;i < count;i++ )
		printf("%d\t",Fibonacci(i) );
	putchar('\n');
	puts("*******************************************************");
	Fibona_circu(count);
	putchar('\n');
}

























