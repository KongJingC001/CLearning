#include"sum.h"

int main(int argc, char * argv[])
{
	double sum_money = 0;
	Welcome();
	Play_Music("�����Ч");
	Sleep(2000);
	Stop_Music();
	sum_money = Guess_game();
	Play_Music("�����Ч");
	printf("������һ������");
	putchar('.');
	Sleep(600);
	putchar('.');
	Sleep(600);
	puts(".");
	Sleep(600);
	Stop_Music();
	system("pause");
	sum_money += Calc_game();
	printf("�ڶ�����Ϸ�����������\n");
	Print_ch('*', 8);
	putchar('\n');
	printf("* %4.2lf *\n", sum_money);
	Print_ch('*', 8);
	putchar('\n');
	Play_Music("�����Ч");
	printf("������һ������");
	putchar('.');
	Sleep(600);
	putchar('.');
	Sleep(600);
	puts(".");
	Sleep(600);
	Stop_Music();
	system("pause");
	system("color 46");
	system("cls");
	sum_money += Money_game();
	system("cls");
	system("color 46");
	printf("��������Ҫ�����ˣ������ĺ���ǣ�\n");
	Print_ch('*', 8);
	putchar('\n');
	printf("* %4.2lf *\n", sum_money);
	Print_ch('*', 8);
	putchar('\n');
	Del_file("Music");
	return 0;
}