#include"unit1.h"
void Program1()
{
	char a;
	int count_space = 0;
	int count_enter = 0;
	int count_another = 0;
	puts("Please enter some words:(# to stop!)");
	while('#' != ( a = getchar() ) )
	{
		switch(a)
		{
		case ' ' :
			count_space++;
			break;
		case '\n':
			count_enter++;
			break;
		default :
			count_another++;
		}
	}
	printf("The space count is %d,enter counts is %d,another char count is %d\n"
		,count_space,count_enter,count_another);
}
void Program2()
{
	char word;
	int count = 0;
	puts("Please enter some words:(# to stop!)");
	while('#' != (word = getchar() ) )
	{
		printf("%c--%d\t",word,word);
		count++;
		if(count % 8 == 0 && count != 0)
			putchar('\n');
	}
	putchar('\n');
}
void Program3()
{
	int number;
	int even_count = 0;
	int odd_count = 0;
	int even_sums =  0;
	int odd_sums = 0;
	float even_avg;
	float odd_avg;
	puts("Please input a number:");
	scanf("%d",&number);
	while(number)
	{
		fflush(NULL);
		if(number % 2 == 0)
		{
			even_count++;
			even_sums += number;
		}
		else
		{
			odd_count++;
			odd_sums += number;
		}
		printf("Please continue enter:");
		scanf("%d",&number);
	}
	even_avg = (float)(even_sums) / (float)(even_count);
	odd_avg = (float)(odd_sums) / (float)(odd_count);
	printf("The odd number has %d,average is %.2f,and the even number has %d,average is %.2f.\n"
		,odd_count,odd_avg,even_count,even_avg);
}
void Program4()
{
	char word;
	int count_1 = 0;
	int count_2 = 0;
	puts("Please enter some words:");
	while('#' != ( word = getchar() ) )
	{
		if(word == '.')
		{
			count_1++;
			continue;
		}
		if(word == '!')
		{
			count_2++;
			continue;
		}
	}
	printf("The first exchange is %d,and the second exchange is %d\n",
		count_1,count_2);
}
void Program5()
{
	char word;
	int count_1 = 0;
	int count_2 = 0;
	puts("Please enter some words:");
	while('#' != ( word = getchar() ) )
	{
		switch(word)
		{
		case '!':
			count_1++;
			break;
		case '.':
			count_2++;
			break;
		default :
			continue;
		}
	}
	printf("The first exchange is %d,and the second exchange is %d\n",
		count_1,count_2);
}
void Program6()
{
	int i;
	char word = 1;
	int count_ei = 0;
	puts("Please enter some words:");
	while(word != '#')
	{
		word = getchar();
		if(word == 'e')
		{
			word = getchar();
			if(word == 'i')
				count_ei++;
		}
	}
	printf("The ei arises %d time.\n",count_ei);
}
void Program7()
{
	double hours;
	double all_money;
	double taxes;      //税金
	puts("Please enter your word hours:");
	scanf("%lf",&hours);
	if(hours > 40)
		hours *= OVERTIME;
	all_money = BASE_PAY * hours;
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
void Program8()
{
	int quit = 0;
	int choice;
	double base_money;
	double hours;
	double all_money;
	double taxes;  //税金
	while(1)
	{
		puts("*****************************************************************\n");
		puts("Enter the number corresponding to the desired pay rate or action:");
		puts("1) $8.75/hr\t\t2) $9.33/hr\n3) $10.00/hr\t\t4) $11.20/hr\n5) quit\n");
		puts("*****************************************************************");
		scanf("%d",&choice);
		switch(choice)
		{
		default :
			puts("Please again enter a number:");
			continue;
		case 1:
			base_money = 8.75;
			break;
		case 2:
			base_money = 9.33;
			break;
		case 3:
			base_money = 10.00;
			break;
		case 4:
			base_money = 11.20;
			break;
		case 5:
			quit = 1;
			break;
		}
		if(quit == 1)
			break;
		puts("Please enter your word hours:");
		scanf("%lf",&hours);
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
void Program9()
{
	int number;
	int i;
	int k;

	printf("Please input a number:");
	scanf("%d",&number);
	for( i = 2 ; i < number;i++)
	{
		for(k = 2;k < i;k++)
			if(i % k == 0)
				break;
		if(i == k)
			printf("%d\t",i);
	}
	printf("\n");
}
void Program10()
{
	const double s_more = 17850;
	const double h_more = 23900;
	const double u_more = 29750;
	const double d_more = 14875;
	double taxes;
	double salary;
	int choice;
	while(1)
	{
		puts("Please enter a choice:");
		printf("1.single\t2.head of household\n3.married union\t4.married divorced\n");
		scanf("%d",&choice);
		scanf("%*c");
		switch(choice)
		{
		case 1:
			printf("Please enter your salary:");
			scanf("%lf",&salary);
			fflush(NULL);
			if(salary > s_more)
				taxes = s_more * 0.15 + ( salary - s_more ) * 0.28;
			else
			taxes = salary * 0.15;
			break;
		case 2:
			printf("Please enter your salary:");
			scanf("%lf",&salary);
			fflush(NULL);
			if(salary > h_more)
				taxes = h_more * 0.15 + ( salary - h_more ) * 0.28;
			else
			taxes = salary * 0.15;
			break;
		case 3:
			printf("Please enter your salary:");
			scanf("%lf",&salary);
			fflush(NULL);
			if(salary > u_more)
				taxes = u_more * 0.15 + ( salary - u_more ) * 0.28;
			else
			taxes = salary * 0.15;
			break;
		case 4:
			printf("Please enter your salary:");
			scanf("%lf",&salary);
			fflush(NULL);
			if(salary > d_more)
				taxes = d_more * 0.15 + ( salary - d_more ) * 0.28;
			else
			taxes = salary * 0.15;
			break;
		default:
			puts("Enter Error! ");
			continue;
		}
		printf("The taxes is %.2lf\n",taxes);
	}
}
void Program11()
{
	const double artichoke_price = 2.05;
	const double beet_price = 1.15;
	const double carrot_price = 1.09;
	int test;
	double need_kg;
	double art_kg = 0;
	double beet_kg = 0;
	double car_kg = 0;
	double all_kg;
	double things_pay;
	double carriage;
	double discount;
	double all_pay;
	char choice;
	while(1)
	{
		puts("*********************************************************************");
		puts("what do you want to buy?(q to qiut)");
		printf("a.artichoke: $2.05\tb.beet: $1.15\tc.carrot: $1.09\n");
		scanf("%c",&choice);
		fflush(NULL);
		if('q' == choice)
		{
			puts("Program Colse!");
			break;
		}
		switch(choice)
		{
		case 'a':
			printf("Please enter how much you need to buy:");
			test = scanf("%lf",&need_kg);
			scanf("%*c");
			if(need_kg < 0 || test == 0)
			{
				puts("Enter Error!");
				continue;
			}
			art_kg += need_kg;
			puts("Thanks!");
			break;
		case 'b':
			printf("Please enter how much you need to buy:");
			scanf("%lf",&need_kg);
			scanf("%*c");
			if(need_kg < 0 || test == 0)
			{
				puts("Enter Error!");
				continue;
			}
			beet_kg += need_kg;
			puts("Thanks!");
			break;
		case 'c':
			printf("Please enter how much you need to buy:");
			scanf("%lf",&need_kg);
			scanf("%*c");
			if(need_kg < 0 || test == 0)
			{
				puts("Enter Error!");
				continue;
			}
			car_kg += need_kg;
			puts("Thanks!");
			break;
		default:
			putchar('\n');
			puts("\t***************************************\t");
			puts("\t*            Enter Error!             *\t");
			puts("\t***************************************\t");
			putchar('\n');
			fflush(NULL);
			continue;
		}
		printf("You pay to artichoke %.2lf Pound,beet %.2lf Pound,carrot %.2lf Pound\n",art_kg,beet_kg,car_kg);
		puts("*********************************************************************");
		putchar('\n');
	}
	things_pay = artichoke_price * art_kg + beet_price * beet_kg + carrot_price * car_kg;
	if(things_pay >= 100)
	{
		discount = things_pay * 0.05;
		things_pay -= discount;
	}
	else
		discount = 0;
	all_kg = art_kg + beet_kg + car_kg;
	if(all_kg <= 6.5)
		carriage = 6.5;
	else
	{
		if(all_kg <= 20)
			carriage = 14;
		else
			carriage = 14 + (all_kg - 20) * 0.5;
	}
	all_pay = things_pay - discount;
	printf("||%10s||%10s||%5s||%7s||%6s||\n","Commodity","artichoke","beet","carrot","Total");
	printf("||%10s||%10.2lf||%5.2lf||%7.2lf||%6.2lf||\n","Price",2.05,1.15,1.09,things_pay);
	printf("||%10s||%10.2lf||%5.2lf||%7.2lf||%6.2lf||\n","Pound",art_kg,beet_kg,car_kg,all_kg);
	printf("||%10s||%.2lfCarriage:%8.2lf||Real Money:%7.2lf||\n","Discount",discount,carriage,all_pay);
}