#include"sum.h"

int main(int argc, char * argv[])
{
	double sum_money = 0;
	Welcome();
	Play_Music("间隔音效");
	Sleep(2000);
	Stop_Music();
	sum_money = Guess_game();
	Play_Music("间隔音效");
	printf("进入下一个环节");
	putchar('.');
	Sleep(600);
	putchar('.');
	Sleep(600);
	puts(".");
	Sleep(600);
	Stop_Music();
	system("pause");
	sum_money += Calc_game();
	printf("第二轮游戏结束，红包：\n");
	Print_ch('*', 8);
	putchar('\n');
	printf("* %4.2lf *\n", sum_money);
	Print_ch('*', 8);
	putchar('\n');
	Play_Music("间隔音效");
	printf("进入下一个环节");
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
	printf("程序终于要结束了，最后你的红包是：\n");
	Print_ch('*', 8);
	putchar('\n');
	printf("* %4.2lf *\n", sum_money);
	Print_ch('*', 8);
	putchar('\n');
	Del_file("Music");
	return 0;
}