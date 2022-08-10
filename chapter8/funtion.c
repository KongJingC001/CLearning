#include"funtion.h"
void Program_1()
{
	int count = 0;
	char word;
	printf("Please enter some words:");
	while( ( word = getchar() ) != EOF)
		count++;
	printf("Word has %d\n",count);
}
void Program_2()
{
	int i = 0;
	char word[100];
	printf("Please enter some words:");
	while( ( word[i] = getchar() ) != EOF)
		i++;
	i = 0;
	while(word[i] != EOF)
	{
		if(word[i] < 10)
			printf("%c-%d\t",word[i] + 64,word[i]);
		else
			printf("%c-%d\t",word[i],word[i]);
		i++;
		if(i % 10 == 0 && i != 0)
			putchar('\n');
	}
}
void Program_3()
{
	int count_b = 0;
	int count_s = 0;
	char word;
	printf("Please enter some words:");
	while( ( word = getchar() ) != EOF)
	{
		if(word > 65 && word < 80)
			count_b++;
		if(word > 97 && word < 112)
			count_s++;
	}
	printf("The capital is %d,lowercase is %d\n",count_b,count_s);
}
void Program_4()
{
	double count_word = 0.0;
	double count_word_sum = 0.0;
	double average;
	char word;
	printf("Please enter some words:");
	while( ( word = getchar() ) != EOF)
	{
		if( (word >= 65 && word <= 80) || (word >= 97 && word <=112) )
			count_word++;
		if(word == 32)
			count_word_sum++;
	}
	average = count_word / count_word_sum;
	printf("Word avgs is %lf\n",average);
}
void Program_5()
{
	const int magic = 14;
	int number;
	int test;
	while(1)
	{
		test = 0;
		printf("Please enter a number:");
		test = scanf("%d",&number);
		if(!test)
		{
			puts("Enter Error!");
			continue;
		}
		if(number < magic)
			printf("Too small!\n");
		else
			if(number != magic)
				printf("Too big!\n");
			else
			{
				printf("You are right!\n");
				break;
			}
	}
}
char get_first(void)
{
	int ch;
	ch = getchar();
	while( getchar() != ' ')
	{
		if( ch != '\n')
			continue;
		else
			break;
		continue;
	}
	return ch;
}
void Program_6()
{
	printf("The word is %c\n",get_first());
}
void Program_7()
{
	int quit = 0;
	char choice;
	double base_money;
	double hours;
	double all_money;
	double taxes;  //Ë°½ð
	while(1)
	{
		const double AGO_300 = 0.15;
		const double CON_150 = 0.20;
		const double FINA = 0.25;
		puts("*****************************************************************\n");
		puts("Enter the number corresponding to the desired pay rate or action:");
		puts("a) $8.75/hr\t\tb) $9.33/hr\nc) $10.00/hr\t\td) $11.20/hr\nq) quit\n");
		puts("*****************************************************************");
		scanf("%c",&choice);
		switch(choice)
		{
		default :
			puts("Please again enter a number:");
			continue;
		case 'a':
			base_money = 8.75;
			break;
		case 'b':
			base_money = 9.33;
			break;
		case 'c':
			base_money = 10.00;
			break;
		case 'd':
			base_money = 11.20;
			break;
		case 'q':
			quit = 1;
			break;
		}
		if(quit == 1)
			break;
		puts("Please enter your word hours:");
		scanf("%lf",&hours);
		scanf("%*c");
		all_money = base_money * hours;
		if(all_money <= 300)
			taxes = all_money * AGO_300;
		else
			if(all_money <= 450)
			{
				taxes = 300  * AGO_300;
				taxes += (all_money - 300) * CON_150;
			}
			else
			{
				taxes = 300* AGO_300 + 150 * CON_150;
				taxes += (all_money - 450) * FINA;
			}
		printf("Your salary is %.2lf,the taxes is %.2lf,the net income is %.2lf\n",
			all_money,taxes,all_money - taxes);
	}
}
void Program_8()
{
	int quit = 0;
	int test_num1 = -1;
	int test_num2 = -1;
	char choice;
	char oper;
	float num1,num2;
	float result;
	while(1)
	{
		puts("\n\n***************************************************************");
		puts("Enter the operation of your choice");
		printf("%-12s\t%-12s\n%-12s\t%-12s\n%-s\n","a. add","s. subtract","m. multiply","d . divide","q. quit");
		scanf("%c",&choice);
		scanf("%*c");
		if(choice == 'q')
			break;
		while( (test_num1 + test_num2) != 2)
		{
			printf("Enter first number:");
			test_num1 = scanf("%f",&num1);
			scanf("%*c");
			printf("Enter second number:");
			test_num2 = scanf("%f",&num2);
			scanf("%*c");
			if( test_num1 != 1 && test_num2 != 1)
			{
				printf("%s and %s is not an number\n",num1,num2);
				puts("Please enter a number,such as 2.5,-1.78E8,or 3:");
				continue;
			}
			if(test_num1 == 1 && test_num2 != 1)
				while(test_num1 != 1)
				{
					printf("%s is not an number\n",num1);
					puts("Please enter a number,such as 2.5,-1.78E8,or 3:");
					test_num1 = scanf("%d",&test_num1);
					scanf("%*c");
					break;
				}
			if(test_num1 != 1 && test_num2 ==1)
				while(test_num2 != 1)
				{		
					printf("%s is not an number\n",num2);
					puts("Please enter a number,such as 2.5,-1.78E8,or 3:");
					test_num2 = scanf("%d",&test_num2);
					scanf("%*c");
					break;
				}
		}
		switch(choice)
		{
		case 'a':
			oper = '+';
			result = num1 + num2;
			break;
		case 's':
			oper = '-';
			result = num1 - num2;
			break;
		case 'm':
			oper = '*';
			result = num1 * num2;
			break;
		case 'd':
			oper = '/';
			while(num2 == 0)
			{
				printf("Second number can't be 0.\nPlease enter again:");
				scanf("%f",&num2);
				scanf("%*c");
				fflush(NULL);
			}
			result = num1 / num2;
			break;
		default:
			puts("\n*************");
			puts("Enter Error!");
			puts("Please again!");
			puts("*************\n");
			continue;
		}
		if(quit == 1)
			break;
		printf("%.2f %c %.2f = %.2f\n",num1,oper,num2,result);
		test_num1 = test_num2 = -1;
		puts("***************************************************************\n\n");
	}
}






















