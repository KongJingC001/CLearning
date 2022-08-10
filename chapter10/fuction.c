#include"eventual.h"
void Demo_1()
{
	const double rain[3][12] = 
	{
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 3.2, 4.6, 7.8, 5.7, 0.2, 0.9},
		{4.6, 7.9, 8.9, 1.2, 3.0, 1.6, 3.4, 4.2, 1.2, 0.5, 0.6, 1.2},
		{2.3, 4.5, 4.1, 0.2, 7.5, 4.6, 1.3, 1.2, 2.3, 1.6, 9.2, 2.2}
	};
	int year,month;
	double subtot, total;
	puts(" YEAR   RAINFALL (inches)");
	for(year = 0,total = 0;year < 3;year++)
	{
		for(month = 0,subtot = 0;month < 12;month++)
			subtot += *( *(rain + year) + month );
		printf("%5d %12.1lf\n",2010 + year, subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.3f inches.\n\n", total / 3);
	puts("MONTHLY AVERAGES:\n");
	printf(" Jan  Fab  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	for(month = 0;month < 12;month++)
	{
		for(year = 0,subtot = 0;year < 3;year++ )
			subtot += *( *(rain + year) + month );
		printf("%4.1lf ",subtot / 3);
	}
	putchar('\n');
}
void Copy_arr(double a[], double b[], int n)
{
	int i;
	for(i = 0 ;i < n; i++)
		a[i] = b[i];
}
void Copy_ptr(double a[], double b[], int n)
{
	int i;
	for(i = 0 ; i < n ; i++)
		* (a + i) = *( b + i);
}
void Copy_ptr3(double a[], double b[], double c[])
{
	int i = 0;
	while(b[i] != c[5 - i])
	{
		a[i] = b[i];
		i++;
	}
}
void Demo_2()
{
	int i;
	double source[] = {1.1, 2.2, 3.4, 5.6, 7.88};
	double target1[5];
	double target2[5];
	double target3[5];
	Copy_arr(target1, source, 5);
	Copy_ptr(target2, source, 5);
	Copy_ptr3(target3, source, source + 5);
	for(i = 0 ; i < 5;i++)
		printf("%7.2lf%7.2lf%7.2lf\n",target1[i], target2[i], target3[i]);
}
double Re_max()
{
	int i;
	double a[4] = {7 , 1 , 13 , 5};
	double max = a[0];
	for( i = 0 ; i < 4; i++)
		if(max < a[i])
			max = a[i];
	return max;
}
void Demo_3()
{
	printf("The max is %.1lf\n", Re_max() );
}
short Re_index()
{
	int i;
	double a[4] = {7 , 1 , 13 , 5};
	double max = a[0];
	int max_index = 0;
	for( i = 0 ; i < 4; i++)

		if(max < a[i])
			max_index = i;
	return max_index;
}
void Demo_4()
{
	printf("The max's index is %d\n", Re_index() );
}
double Re_subtra()
{
	int i;
	double a[4] = {7 , 1 , 13 , 5};
	double max = a[0];
	double min = a[0];
	for( i = 0 ; i < 4; i++)
	{
		if(max < a[i])
			max = a[i];
		if(min > a[i])
			min = a[i];
	}
	return max - min;
}
void Demo_5()
{
	printf("The max - min = %.1lf\n", Re_subtra() );
}
void Re_array(double a[])
{
	int i;
	double temp;
	for(i = 0 ; i < 5 / 2; i++)
	{
		temp = a[4 - i];
		a[4 - i] = a[i];
		a[i] = temp;
	}
}
void Demo_6()
{
	int i;
	double source[5] = {1.2, 3.5, 2.9, 7.2, 9.1};
	Re_array(source);
	for(i = 0 ; i < 5; i++)
		printf("%5.2lf", source[i]);
	putchar('\n');
}
void Demo_7()
{
	int i, j;
	double set[2][4] = 
	{
		{3.14, 4.28, 1.23, 1.21}, {7.69, 5.20, 1.41, 10.23}
	};
	double sile[2][4];
	Copy_arr(sile[0], set[0], 4);
	Copy_arr(sile[1], set[1], 4);
	printf("The result is:\n");
	for(i = 0 ; i < 2;i++)
	{
		printf("The %d is:", i);
		for(j = 0 ; j < 4;j++)
			printf("%6.2lf", sile[i][j]);
		putchar('\n');
	}
}
void Demo_8()
{
	int i;
	double source[7] = {1.2, 6.3, 4.5, 10.1, 9.2, 3.1, 8.6};
	double result[3];
	Copy_ptr(result, source + 2, 3);
	for(i = 0 ; i < 3;i++)
		printf("%7.2lf", result[i]);
	putchar('\n');
}
#define N 3
void Copy_alterable(double source[N][5], double goal[N][5] )
{
	int i, j;
	for(i = 0 ; i < N; i++)
		for(j = 0 ; j < 5; j++)
			goal[i][j] = source[i][j];
}
void Pr_display(double a[N][5])
{
	int i, j;
	for(i = 0 ; i < N; i++)
	{
		for(j = 0 ; j < 5; j++)
			printf("%5.2lf", a[i][j]);
		putchar('\n');
	}
	putchar('\n');
}
void Demo_9()
{
	double source[N][5] = 
	{
		{7.62, 5.56, 1.2, 4.5, 0.9}, {1.2, 3.2, 6.2, 7.8, 9.9}, {1.24, 9.86, 7.34, 9.33, 6.1}
	};
	double result[N][5];
	puts("The source array is:");
	Pr_display( source );
	Copy_alterable( source, result );
	puts("The result array is:");
	Pr_display( result );
}
#undef N
void Sum_two(double a[][5], double b[][5], double sum[][5], short n)
{
	int i, j;
	for(i = 0 ; i < n ; i++)
		for(j = 0 ; j < 5 ; j++)
			sum[i][j] = a[i][j] + b[i][j];
}
void Demo_10()
{
	int i, j;
	double source1[3][5] = 
	{
		{7.62, 5.56, 1.2, 4.5, 0.9}, {1.2, 3.2, 6.2, 7.8, 9.9}, {1.24, 9.86, 7.34, 9.33, 6.1}
	};
	double source2[3][5] = 
	{
		{7.62, 5.56, 1.2, 4.5, 0.9}, {1.2, 3.2, 6.2, 7.8, 9.9}, {1.24, 9.86, 7.34, 9.33, 6.1}
	};
	double re_sum[3][5];
	Sum_two(source1, source2, re_sum, 3);
	printf("The result is:\n");
	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < 5 ; j++)
			printf("%7.2lf", re_sum[i][j]);
		putchar('\n');
	}
}
void Eleven_print(int a[][5])
{
	int i, j;
	for(i = 0 ; i < sizeof(a) - 1;i++)
	{
		for(j = 0 ; j < 5;j++)
			printf("%d\t",a[i][j]);
		putchar('\n');
	}
}
void Sum_double(int a[][5])
{
	int i, j;
	for(i = 0 ; i < sizeof(a) - 1;i++)
		for(j = 0 ; j < 5;j++)
			a[i][j] *= 2;
}
void Demo_11()
{
	int start[3][5] = 
	{
		{1, 11, 111, 1111, 11111}, {2, 45, 23, 32, 54}, { 98, 34, 12, 17, 79}
	};
	printf("The begin is:\n");
	Eleven_print( start );
 	Sum_double( start );
	printf("The multiply array is:\n");
	Eleven_print( start);
}
#define MONTHS 12
#define YEARS 5
void Rain_twelve( const double a[][MONTHS] )
{
	int year, month;
	double subtot, total;
	for(year = 0, total = 0; year < YEARS;year++)
	{
		for(month = 0 , subtot = 0; month < MONTHS; month++)
			subtot += a[year][month];
		printf("%5d %15.1lf\n", 2010 + year, subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.1lf inches.\n\n", total / YEARS );
	puts("MONTHLY AVERAGES:\n");
	printf(" Jan  Fab  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	
	for(month = 0;month < MONTHS; month++)
	{
		for(year = 0 ,subtot = 0 ; year < YEARS;year++)
			subtot += a[year][month];
		printf("%4.1lf ",subtot / YEARS);
	}
	putchar('\n');
}
void Demo_12()
{
	const double rain[YEARS][MONTHS] = 
	{
		{ 4.3, 4.3, 4.3, 4.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{ 8.4, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
	};
	printf(" YEAR   RAINFALL  (inches)\n");
	Rain_twelve( rain );
}
#undef MONTHS
#undef YEARS
#define ROWS 3
#define COLS 5
void Input_the_array_a( double a[][COLS] )
{
	int i, j;
	char order[3][10] = {"first", "second", "third"};
	for(i = 0 ; i < ROWS; i++)
	{
		printf("PLease input the %s data:", order[i]);
		for(j = 0 ; j < COLS; j++)
			scanf("%lf", &a[i][j]);
		printf("Press any key to continue:(next)\n");
		getchar();
		fflush(NULL);
	}
}
double Average_array_b( const double a[])
{
	int j;
	double sum = 0;
	for(j = 0 ; j < COLS;j++)
		sum += a[j];
	return sum  / ( COLS * 1.0);
}
double All_array_avg_c( const double a[][COLS])
{
	int i ,j;
	double sum = 0;
	for(i = 0 ; i < ROWS;i++)
		for(j = 0 ; j < COLS; j++)
			sum += a[i][j];
	return  sum / ( ROWS * COLS * 1.0);
}
double Max_array_d( const double a[][COLS])
{
	int i ,j;
	double max = a[0][0];
	for(i = 0 ; i < ROWS ; i++)
		for(j = 0 ; j < COLS; j++)
			if(max < a[i][j])
				max = a[i][j];
	return  max;
}
void Demo_13()
{
	int i, j;
	double first_avg, second_avg, third_avg, all_avg,max_array;
	double input_array[ROWS][COLS];
	puts("Please enter three group data:\n");
	Input_the_array_a( input_array );
	first_avg = Average_array_b( input_array[0] );
	second_avg = Average_array_b( input_array[1] );
	third_avg = Average_array_b( input_array[2] );
	all_avg = All_array_avg_c( input_array );
	max_array = Max_array_d( input_array );
	puts("The result  is:");
	for(i = 0  ; i  < ROWS;i++)
	{
		for(j = 0 ; j < COLS;j++)
			printf("%.2lf\t", input_array[i][j]);
		putchar('\n');
	}
	printf("The first array average is:%.2lf\n", first_avg);
	printf("The second array average is:%.2lf\n", second_avg);
	printf("The third array average is:%.2lf\n", third_avg);
	printf("The all data average is:%.2lf\n", all_avg);
	printf("The all data maximum is:%.2lf\n", max_array);
}
#undef ROWS
#undef COLS
void Demo_14()
{
	printf("The Microsoft Visual C++ is not support C11 and C99!\n");
}
