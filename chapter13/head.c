#include"head.h"

/* Practice 1 */
#define N 20
void main_1()
{
	int ch;
	char file_name[N];
	FILE * fp;
	unsigned long count = 0;
	printf("Please enter the file name:");
	scanf("%s", file_name);
	if( (fp = fopen(file_name, "r") ) == NULL)
	{
		printf("Can't open %s\n", file_name);
		exit(EXIT_FAILURE);
	}
	while( (ch = getc(fp) ) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("File %s has %lu characters\n", file_name, count);
}
#undef N
/* Practice 2 */
void main_2()
{
	int ch;
	FILE * fp, * fpr;
	if( (fp = fopen("Problem2.txt", "rb") ) == NULL)
	{
		printf("Can't open %s !\n", "Problem2.ext");
		exit(EXIT_FAILURE);
	}
	fpr = fopen("Problem2-副本.txt", "wb");
	while( (ch = getc(fp) ) != EOF)
	{
		putc(ch, fpr);
	}
	printf("Copy successed!\n");
	fclose(fp);
	fclose(fpr);
}
/* Practice 3 */
void main_3()
{
	int ch, i;
	FILE * fp, * fpl;
	char source[50];
	printf("Please enter the TXT file name:");
	scanf("%s", source);
	if( (fp = fopen(source, "r")) == NULL)
	{
		printf("Can't open %s file.\n", source);
		exit(EXIT_FAILURE);
	}
	for(i = strlen(source) - 4; i <= (int)strlen(source) - 1; i++)
		source[i] = '\0';
	strcat(source, "-副本.txt");
	fpl = fopen(source, "w");
	while( (ch = getc(fp) ) != EOF)
	{
		putc(ch, fpl);
	}
	printf("The source file copied!\n");
	fclose(fp);
	fclose(fpl);
}
/* Practice 4 */
void main_4();
/* Practice 5 */
void main_5();
/* Practice 6 */
void main_6();
/* Practice 7 */
void main_7();
/* Practice 8 */
void main_8();
/* Practice 9 */
void main_9();
/* Practice 10 */
void main_10();
/* Practice 11 */
void main_11();
/* Practice 12 */
void main_12();
/* Practice 13 */
void main_13();
/* Practice 14 */
void main_14();


