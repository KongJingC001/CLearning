#include"resource.h"
//function_1
int critic()
{
	int units;
	printf("No luck, my friend. Try again.\n");
	scanf("%d",&units);
	return units;
}
void Fun_main_1()
{
	int units;
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while(units != 56)
		units = critic();
	printf("You must have looked it up!\n");
	return;
}
//function_2
int mode_2;
double distance_2;
double fuel_2;
void set_mode_2(int a)
{
	if(a != 0 && a != 1)
	{
		printf("Invalid mode specified. Mode 1(US) used.\n");
		mode_2 = 1;
	}else
	{
		mode_2 = a;
	}
}
void get_info_2()
{
	if(mode_2 == 0)
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%lf", &distance_2);
		printf("Enter fuel consumed in liters:");
		scanf("%lf", &fuel_2);
	}
	else
	{
		printf("Enter distance traveled in miles:");
		scanf("%lf", &distance_2);
		printf("Enter fuel consumed in gallons:");
		scanf("%lf", &fuel_2);
	}
}
void show_info_2()
{
	if(mode_2 == 0)
	{
		printf("Fuel consumption is %.2lf liters per 100 km.\n", fuel_2 / distance_2 * 100.0 );
	}
	else
	{
		printf("Fuel consumption is %.2lf miles per gallon.\n", distance_2 / fuel_2);
	}
}
void Fun_main_2()
{
	int mode;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &mode);
	while(mode >= 0)
	{
		set_mode_2(mode);
		get_info_2();
		show_info_2();
		getchar();
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit):");
		scanf("%d", &mode);
	}
	printf("Deno.\n");
	return;
}
//function_3
double get_info_3(int mode)
{
	double distance, fuel;
	if(mode == 0)
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in liters:");
		scanf("%lf", &fuel);
		return fuel / distance * 100.0;
	}
	else
	{
		printf("Enter distance traveled in miles:");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in gallons:");
		scanf("%lf", &fuel);
		return distance / fuel;
	}
}
void show_info_3(double result, int mode)
{
	if(mode == 0)
	{
		printf("Fuel consumption is %.2lf liters per 100 km.\n", result);
	}
	else
	{
		printf("Fuel consumption is %.2lf miles per gallon.\n", result);
	}
}
void set_mode_3()
{
	int mode;
	do{
		printf("Enter 0 for metric mode, 1 for US mode: ");
		scanf("%d", &mode);
		if(mode == -1)
			return;
		if(mode != 0 && mode != 1)
		{
			printf("Invalid mode specified. Mode 1(US) used.\n");
			mode = 1;
		}
		show_info_3(get_info_3(mode), mode);
	}while(mode != -1);
	return;
}
void Fun_main_3()
{
	set_mode_3();
	printf("Done.\n");
	return;
}
//funcrion_4
void Test_time()
{
	static int count = 0;
	count++;
	printf("Use %d times.\n", count);
}
void Fun_main_4()
{
	int i = 0;
	while( i < 10)
	{
		i++;
		Test_time();
	}
}
//function_5
#define N 100
void Fun_main_5()
{
	int i, j, temp;
	int number[N];
	srand(time(0));
	for(i = 0; i < N; i++)
		number[i] = (unsigned int)(rand() * 99999) % 10 + 1 ;
	printf("Start number:\n");
	for(i = 0; i < N; i++)
	{
		printf("%5d", number[i]);
		if((i + 1) % 10 == 0)
			putchar('\n');
	}
	printf("Press any key to sort.\n");
	getchar();
	for(i = 0; i < N - 1; i++)
	{
		for(j = 0; j < N - i - 1; j++)
		{
			if(number[j] < number[j + 1])
			{
				temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}
	printf("Later:\n");
	for(i = 0; i < N; i++)
	{
		printf("%5d", number[i]);
		if((i + 1) % 10 == 0)
			putchar('\n');
	}
}
#undef N
//function_6
#define N 1000
void Fun_main_6()
{
	int i, j;
	int number[N], count[10] = {0};
	int evidence[] = {1,2,3,4,5,6,7,8,9,10};
	srand(time(0));
	for(i = 0; i < N; i++)
		number[i] = (unsigned int)(rand() * 99999) % 10 + 1 ;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < 10; j++)
			if(number[i] == evidence[j])
				count[j]++;
	}
	printf("The result of those numbers:\n");
	for(i = 0; i < 10; i++)
		printf("The times of %d are: %d\n", i + 1, count[i]);
}
#undef N
//function_7
int rollem(int sides)
{
	int roll;

	roll = rand() % sides + 1;

	return roll;
}

void roll_n_dice(int dice, int sides, int roll)
{
	int d;

	if(sides < 2)
	{
		printf("Need at least 2 sides.\n");
		return;
	}
	if(dice < 1)
	{
		printf("Need at least 1 die.\n");
		return;
	}
	printf("Here are %d sets of %d %d-sides throws.\n", roll, dice, sides);
	for(d = 0; d < roll; d++)
	{
		printf("%4d", rollem(sides));
		if( (d + 1) % 7 == 0)
			putchar('\n');
	}
	return;
}
void Fun_main_7()
{
	int dice, roll;
	int sides, status;
	
	srand(time(0));
	printf("Enter the number of sets; enter q to stop.\n");
	while(scanf("%d", &roll) == 1 && roll > 0)
	{
		printf("How many sides and how many dice?\n");
		while(scanf("%d", &sides) == 1 && sides > 0)
		{
			if( (status = scanf("%d", &dice)) != 1)
			{
				if(status == EOF)
					break;
				else
				{
					printf("You should have enter an integer.");
					printf(" Let's begin again.\n");
					while(getchar() != '\n')
						continue;
					printf("How many sides and how many dice?\n");
					continue;
				}
			}
			break;
		}
		roll_n_dice(dice, sides, roll);
		printf("\nEnter the number of sets; enter q to stop.\n");
	}
	printf("GOOD FORTURE TO YOU!\n");
	return;
}
//function_8
int * make_array(int elem, int val);
void show_array(const int ar[], int n);
void Fun_main_8()
{
	int * pa;
	int size;
	int value;

	printf("Enter the number of elements: ");
	while(scanf("%d", &size) == 1 && size > 0)
	{
		printf("Enter the initialization value: ");
		scanf("%d", &value);
		fflush(NULL);
		pa = make_array(size, value);
		if(pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements (<1 to quit): ");
	}
	printf("Done.\n");
	return;
}
int * make_array(int elem, int val)
{
	int * num, i;
	num = (int *)malloc(elem * sizeof(int));
	for(i = 0; i < elem; i++)
		num[i] = val;
	return num;
}
void show_array(const int ar[], int n)
{
	int i;
	printf("The number is:\n");
	printf("**********************************\n*");
	for(i = 0; i < n; i++)
	{
		printf("%4d", ar[i]);
		if((i + 1) % 8 == 0)
			printf("*\n*");
	}
	printf("\n**********************************\n");
}
//function_9
void Fun_main_9()
{
	int words;
    int len, i;
    char ** pwords;
    char * temp;
 
    printf("How many words do you wish to enter?");
    scanf("%d",&words);
    pwords = (char **)malloc(words * sizeof(char *));  
	//数组里储存的是指向char类型的指针，pwords是指向指针的指针
    printf("Enter %d words now:\n",words);
    temp = (char *)malloc(50 * sizeof(char)); 
	//分配一段动态内存，用来临时储存每个单词，并返回指向该单词的指针
    for(i = 0; i < words; i++)
    {
        scanf("%s",temp);  
		//scanf在从第一个非空格读取到第一个空格时结束第一次读取，用循环来分别读取五个单词，每个单词用字符串形式储存在动态分配的内存中，由temp指向这段内存
        len = strlen(temp); 
		//检查第i+1个单词的长度，用于分配空间
        pwords[i] = (char *)malloc((len + 1) * sizeof(char)); 
		//pwords的元素是指针，这里分配一个动态内存，用pwords中的指针指向该动态内存，且内存的长度是单词长度加一，即多储存一个'\0'，字符串结尾
        strcpy(pwords[i],temp); 
		//在pwords[i]指向的内存分配完成后，将该字符串temp拷贝到这个动态内存中
    }
    free(temp); //临时空间使用完毕后释放
    printf("Here are your words:\n");
    for(i = 0; i < words; i++)
    {
        puts(pwords[i]); 
		//打印pwords[i]所指向的地址中的内容（是一个字符串，即用%s的形式来储存每一个单词），并用puts()自动打印换行符
    }
 
    free(pwords); //释放内存
 
    return;

}