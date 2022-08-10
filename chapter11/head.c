#include"head.h"
#define N 20
void All_character_input( char* a )
{
	printf("Please enter the character steam:");
	fgets(a, N, stdin);
}
void first_main()
{
	char result[N];
	All_character_input( result );
	fputs( result, stdout );
}
void Some_character_input( char* a )
{
	int i;
	printf("Please enter the character steam:");
	for(i  = 0 ; i < N;i++)
	{
		a[i] = getchar();
		if(a[i] == 30 || a[i] == 32 || a[i] == '\t' )
		{
			a[i] = '\0';
			break;
		}
	}
}
void second_main()
{
	char result[N];
	Some_character_input( result );
	fputs( result, stdout );
}
#undef N
void Word_input( char a[] )
{
	int i ,j;
	char enter[100];
	fgets(enter, 100, stdin);
	for(i = 0 ,j = 0; i < 100 && enter[i] != '\0'; i++)
	{
		if( (enter[i] <= 'Z' && enter[i] >= 'A') || (enter[i] <= 'z' && enter[i] >= 'a') )
		{
			a[j] = enter[i];
			if( enter[i+1] == 30 || enter[i+1] == 32 || enter[i+1] == '\t')
			{
				for(j++;j < 20;j++)
					a[j] = '\0';
				break;
			}
			j++;
		}
	}
}
void third_main()
{
	char source[20];
	printf("Please enter a word:");
	Word_input( source );
	puts(source);
}
short Re_index(double * a)
{
	int i;
	double max = a[0];
	int max_index;
	for(i  = 0 ; i < 5; i++)
	{
		if(max < a[i])
		{
			max = a[i];
			max_index = i;
		}
	}
	return max_index;
}
void fourth_main()
{
	int i;
	double source[5] = {12.35, 24.45, 7.26, 10.02, 7.9};
	printf("The array data is:\n");
	for(i  = 0  ; i < 5 ; i++)
		printf("%6.2lf", source[i]);
	putchar('\n');
	printf("The array max data index is:%d\n", Re_index(source) );
}
char * Re_pointer(char * a, char insearch)
{
	unsigned int i;
	for(i = 0  ; i < strlen(a) ; i++)
	{
		if(* (a + i) == insearch)
			return a + i;
	}
	return NULL;
}
void fifth_main()
{
	int i;
	char source[100];
	char * test = NULL;
	puts("Please enter the some word:");
	for(i = 0 ; i < 100 && source[i - 1] != '\n'; i++)
		 source[i] = getchar();
	for(; i < 100;i++ )
		source[i] =  '\0';
	fputs(source,  stdout);
	printf("We find the character 'e':");
	test = Re_pointer(source, 'e');
	if( test != NULL )
		printf("Success: %c\n", * test);
	else
		puts("Fail!\n");
}
short is_within(char a, char * b)
{
	unsigned int i;
	for(i = 0  ; i < strlen(b) ; i++)
	{
		if(b[i] == a)
			return 1;
	}
	return 0;
}
void sixth_main()
{
	int i;
	char source[100];
	short test;
	puts("Please enter the some word:");
	for(i = 0 ; i < 100 && source[i - 1] != '\n'; i++)
		 source[i] = getchar();
	for(; i < 100;i++ )
		source[i] = '\0';
	printf("We find the character 'f':");
	test = is_within('f', source);
	if( test == 1)
		puts("Success!");
	else
		puts("Fail!");
}
#define SIZE 100
char * myctrncpy(char *a, char *b, int n)
{
	int i;
	for(i = 0; i < n;i++)
		a[i] = b[i];
	return a;
}
void seventh_main()
{
	int i;
	char source[SIZE], result[SIZE];
	puts("Please enter the some word:");
	for(i = 0 ; i < 100 && source[i - 1] != '\n'; i++)
		 source[i] = getchar();
	for(; i < 100;i++ )
		source[i] = '\0';
	myctrncpy(result, source, SIZE - 1);
	printf("The copy word is:");
	puts(result);
}
#undef SIZE
char * string_in(char *a, char *b)
{
	unsigned int  i, k;
	for(i = 0 , k = 0; i < strlen(a); i++)
		if(a[i] == b[k])
			k++;
	if(k == strlen(b) )
		return b;
	return NULL;
}
void eight_main()
{
	int i;
	char * test = NULL;
	char source1[100], source2[100];
	puts("Please enter the some word to the first array:");
	for(i = 0 ; i < 100 && source1[i - 1] != '\n'; i++)
		 source1[i] = getchar();
	for(; i < 100;i++ )
		source1[i] = '\0';
	puts("Please enter the some word to find the first array:");
	for(i = 0 ; i < 100 && source2[i - 1] != '\n'; i++)
		 source2[i] = getchar();
	for(; i < 100;i++ )
		source2[i] = '\0';
	test = string_in(source1, source2);
	if(test == NULL)
		puts("Not found!");
	else
		puts("Found!");
}
void Antitone_string(char *a)
{
	int i, length = strlen(a);
	char temp;
	for(i = 0 ; i < length / 2; i++)
	{
		temp = a[i];
		a[i] = a[length - i - 1];
		a[length - i - 1] = temp;
	}
}
void ninth_main()
{
	int i;
	char source[100];
	puts("Please enter the some word:");
	for(i = 0 ; i < 100 && source[i - 1] != '\n'; i++)
		 source[i] = getchar();
	for(i-- ; i < 100;i++ )
		source[i] = '\0';
	puts("The origanl words is:");
	puts(source);
	puts("The change characters is:");
	Antitone_string(source);
	puts(source);
}
void Delete_space(char *a)
{
	unsigned int i, j, strleng =  strlen(a);
	for(i = 0 ; i < strleng; i++)
	{
		if(a[i] == ' ' || a[i] == '\t' || a[i] == '\0')
		{
			for(j = i; j < strleng ; j++)
			{
				a[j] = a[j + 1];
			}
		}	
	}
	for(i = 0 ; i < strleng; i++)
		if(a[i] == ' ' || a[i] == '\t' || a[i] == '\0')
			Delete_space(a);
}
void tenth_main()
{
	int i;
	char source[100];
	puts("Please enter the some word:");
	for(i = 0 ; i < 100 && source[i - 1] != '\n'; i++)
		 source[i] = getchar();
	for(i-- ; i < 100;i++ )
		source[i] = '\0';
	puts("The origanl array is:");
	puts(source);
	puts("The change array is:");
	Delete_space(source);
	puts(source);
}
void Menu_one(char a[][20])
{
	unsigned int i;
	for(i =  0 ; i < 10 ;i++)
		puts(a[i]);
}
void Menu_two(char a[][20])
{
	int i, j;
	char copy_temp[20];
	for(i = 0 ; i < 9; i++)
	{
		for(j = 0 ; j < 8 - i;j++)
			if(strcmp(a[j] , a[j+1]) == 1)
			{
				strcpy( copy_temp, a[j] );
				strcpy(a[j], a[j+1] );
				strcpy(a[j+1], copy_temp);
			}
	}
	for(i = 0 ; i < 10;i++)
		printf("%s\n", a[i]);
}
void Menu_three(char a[][20])
{
	int i, j;
	char copy_temp[20];
	for(i =  0 ; i < 9; i++)
	{
		for(j = 0 ; j < 9 -i;j++)
			if(strlen(a[j]) > strlen(a[j+1]) )
			{
				strcpy(copy_temp, a[j]);
				strcpy(a[j], a[j+1] );
				strcpy(a[j+1], copy_temp);
			}
	}
	for(i = 0 ; i < 10;i++)
		printf("%s\n", a[i]);
}
void Menu_four(char a[][20])
{
	int i, j, k, m;
	char copy_temp[20], copy_temp1[20], copy_temp2[20];
	for(i =  0 ; i < 9; i++)
	{
		for(j = 0 ; j < 9 -i;j++)
		{	
			for(k = 0, m = 0 ;k < 20;k++)
			{
				if(a[j][k] == ' ' || a[j][k] == '\t')
					continue;
				copy_temp1[m] = a[j][k];
				m++;
			}
			for(k = 0,m = 0;k < 20;k++)
			{
				if(a[j][k] == ' ' || a[j][k] == '\t')
					continue;
				copy_temp2[m] = a[j][k];
				m++;
			}
			if(strcmp(copy_temp1, copy_temp2) == 1)
			{
				strcpy(copy_temp, a[j]);
				strcpy(a[j], a[j+1] );
				strcpy(a[j+1], copy_temp);
			}
		}
	}
	for(i = 0 ; i < 10;i++)
		printf("%s\n", a[i]);
}
void Printf_Menu(char a[][20])
{
	int entrance, count = 0;
	while(1)
	{
		puts("*******************************************************************");
		puts("(1)Print the source character.");
		puts("(2)Print the ASCII way.");
		puts("(3)Print this character order from the longer size of the array.");
		puts("(4)Print this character order form the first words.");
		puts("(5)Quit!");
		puts("*******************************************************************");
		printf("Enter the number to visit the option for print the words:");
		scanf("%d", &entrance);
		fflush(NULL);
		puts("*******************************************************************");
		switch(entrance)
		{
		case 1:
			Menu_one(a);
			break;
		case 2:
			Menu_two(a);
			break;
		case 3:
			Menu_three(a);
			break;
		case 4:
			Menu_four(a);
			break;
		case 5:
			puts("See you next time!");
			return;
		default:
			puts("Enter Error!");
			puts("****************************************");
		}
		count++;
		printf("The %d times desk finish!\n", count);
	}
}
void eleven_main()
{
	int i, j;
	char input_char[10][20];
	printf("Please enter ten words:");
	for(i = 0;i < 10;i++)
	{
		for(j = 0 ; j < 20 && input_char[i][j - 1] != '\n'; j++)
			input_char[i][j] = getchar();
		for(j-- ; j < 20;j++ )
			input_char[i][j] = '\0';
	}
	puts("****************************************");
	puts("Press any key to continue!");
	getchar();
	puts("****************************************");
	Printf_Menu(input_char);
}
//´óÐ´×ÖÄ¸£¬µ¥´ÊÊý£¬Ð¡Ð´×ÖÄ¸£¬±êµã·ûºÅ£¬ Êý×Ö×Ö·û
void Find_some_word(char * a)
{
	unsigned int i;
	int capital_count = 0;
	int lowercase_count = 0;
	int word_count = 0;
	int punct_count = 0;
	int number_count = 0;
	for(i =  0 ;i < strlen(a); i++)
	{
		capital_count += isupper(a[i]) != 0?1:0;
		lowercase_count += islower(a[i]) != 0?1:0;
		punct_count += ispunct(a[i]) != 0?1:0;
		number_count += isdigit(a[i]) != 0?1:0;
		if(a[i] != 32 && a[i+1] == 32)
			word_count++;
	}
	printf("The capital character has %d,the lower case has %d, the word has %d\
the punctuation has %d, the number has %d\n", capital_count, lowercase_count, \
		word_count, punct_count, number_count);
}
void twelve_main()
{
	int i;
	char source[100];
	puts("Please enter the some word:");
	for(i = 0 ; i < 100 ; i++)
	{
		 source[i] = getchar();
		 if(source[i] == EOF)
			 break;
	}
	for(; i < 100;i++ )
		source[i] =  '\0';
	Find_some_word(source);
}
void thirteen_main();
void fourteen_main();
void fifteen_main();
void sixteen_main();