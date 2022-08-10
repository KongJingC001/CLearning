#include"sum.h"


void Play_Music(char * music_name)
{
/*
	int length = 6 + strlen(music_name) + 4;
	char * music_address;
	music_address = (char *)malloc(sizeof(char) * (length + 1) );
	strcpy(music_address, "Music\\");
	strcat(music_address, music_name);
	strcat(music_address, ".wav");
	PlaySound(TEXT(music_address),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);
	free(music_address);
*/
	return;
}


void Stop_Music()
{
/*
	PlaySound(NULL,NULL,SND_FILENAME);*/
	return;
}

void Del_file(char * file_name)
{
	int length = 4 + strlen(file_name);
	char * commond;
	commond = (char *)malloc(sizeof(char) * (length + 1) );
	strcpy(commond, "rd ");
	strcat(commond, file_name);
	strcat(commond, "/s /q");
	system(commond);
	return;
}

void Print_ch(char ch, int number)
{
	int i;
	for(i = 0; i < number; i++)
		putchar(ch);
}

void PlayWelcomeStar(int num)
{
	int i;
	for(i = 0; i < num; i++)
	{
		putchar('*');
		Print_ch(32, 118);
		putchar('*');
		Sleep(800);
		putchar('\n');
	}
	return;
}
void Welcome()
{
	system("color 46");
	//Play_Music("新年快乐");
	Sleep(2500);
	Print_ch('*', 120);
	putchar('\n');
	PlayWelcomeStar(3);
	putchar('*');
	Print_ch(32, 50);
	printf("Happy new year!");
	Print_ch(32, 53);
	putchar('*');
	putchar('\n');
	putchar('*');
	Print_ch(32, 118);
	printf("*\n");
	Sleep(500);
	printf("*                                   猪年到喜迎门，送欢乐送祝福,愿您新春欢乐，万事如意                                  *\n");
	Sleep(500);
	putchar('*');
	Print_ch(32, 118);
	printf("*\n");
	printf("*                                                 阖家欢乐，百事顺心                                                   *\n");
	Sleep(500);
	putchar('*');
	Print_ch(32, 118);
	printf("*\n");
	printf("*                                                 吉星高照，添福添寿                                                   *\n");
	Sleep(500);
	putchar('*');
	Print_ch(32, 118);
	printf("*\n");
	printf("*                                                 幸福美满，快乐一生                                                   *\n");
	Sleep(500);
	PlayWelcomeStar(5);
	Print_ch('*', 120);
	Sleep(2500);
	system("pause");
	Stop_Music();
}

void Congratulation()
{
	//Play_Music("游戏胜利音乐");
	Sleep(2000);
	printf("可选择继续游戏或者退出.\n");
	system("pause");
	//Stop_Music();
} 

double L_game()
{
	int num, result = 74; 
	double value = 0.0;
	//Play_Music("S14赛季王者音效");
	printf("曲面2z=x^2+y^2被平面x+3y+2z=3截成一个面，求原点到这个面的最长距离的整数部分.\n");
	while(1)
	{
		printf("请输入你的结果(输入0退出)：");
		scanf("%d", &num);
		while(getchar() != '\n')
			continue;
		fflush(NULL);
		if(num == 0)
			break;
		if(num == result)
			break;
		printf("结果不对，继续努力吧!\n");
	}
	//Stop_Music();
	if(value == 0)
	{
		Play_Music("游戏失败音效");
		printf("游戏失败！\n");
		Sleep(2000);
		system("pause");
		Stop_Music();
	}
	else
	{
		printf("恭喜得到正确结果！\n");
		Congratulation();
		value = 2.50;
	}
	return value;
}


double M_game()
{
	int i;
	char * word[] = {
		"不积跬步，无以至千里；不积小流，无以成江海。——Kong",
		"不要失去信心，只要坚持不懈，就终会有成果的。——无敌混子强",
		"不作什么决定的意志不是现实的意志；无性格的人从来不做出决定。——KJ",
		"成大事不在于力量的大小，而在于能坚持多久。——麻瓜强",
		"发现者，尤其是一个初出茅庐的年轻发现者，需要勇气才能无视他人的冷漠和怀疑，才能坚持自己发现的意志，并把研究继续下去。——有能强",
		"富贵不能淫，贫贱不能移，威武不能屈。——强子",
		"告诉你使我达到目标的奥秘吧，我唯一的力量就是我的坚持精神。——KONGJING",
		"贵有恒，何必三更起五更眠。最无益，只怕一日曝十日寒。——KongJing",
		"既然我已经踏上这条道路，那么，任何东西都不应妨碍我沿着这条路走下去。——CHQ",
		"涓滴之水终可以磨损大石，不是由于它力量强大，而是由于昼夜不舍的滴坠。——程",
		"没有伟大的意志力，就不可能有雄才大略。 ——Chq",
		"立志用功如种树然，方其根芽，犹未有干；及其有干，尚未有枝；枝而后叶，叶而后花。——空镜",
		"你们应该培养对自己，对自己的力量的信心，百这种信心是靠克服障碍，培养意志和锻炼意志而获得的。——空",
		"你既然期望辉煌伟大的一生，那么就应该从今天起，以毫不动摇的决心和坚定不移的信念，凭自己的智慧和毅力，去创造你和人类的快乐。——KongJing丶C",
		"忍耐和坚持虽是痛苦的事情，但却能渐渐地为你带来好处。——空镜丶C",
		"生活就像海洋，只有意志坚强的人，才能到达彼岸。——Jing"
	};
	double value = 0;
	int num;
	//Play_Music("天气预报片头曲");
	system("cls");
	system("color 91");
	printf("接下来我们玩一个非常有(wu)趣(liao)的游戏.\n");
	for(i = 0; i < 99; i++)
	{
		num = (int)rand() * 9999 % 15;
		Print_ch('*', 120);
		printf("\n第%d次敲击键盘!\t", i + 1);
		if( (i + 1) % 25 == 0)
		{
			printf("还想继续玩下去或是中途放弃(q):");
			if(getchar() == 'q')
			{
				while(getchar() == '\n')
					continue;
				break;
			}
		}
		system("pause");
		puts(word[num]);
		Sleep(800);
	}
	//Stop_Music();
	if(i == 99)
	{
		puts("恭喜过关");
		Congratulation();
		puts("你果然是个正常人！");
		value = 3.90;
	}
	else
	{
		//Play_Music("植物大战僵尸失败");
		puts("猪吃掉了你的脑子。。。");
		value = 0.0;
		Sleep(1500);
		system("pause");
		//Stop_Music();
	}
	return value;
}


double H_game()
{
	int choice, count = 0;
	int num;
	double value;
	//Play_Music("LOL泳池派对音效");
	srand(time(0));
	num  = (int)rand() * 9999 % 10 + 1;
	system("cls");
	system("color d0");
	printf("猜数字游戏!(三次机会，会给出提示信息)\n");
	while(count++ < 3)
	{
		printf("猜猜我是谁：");
		if(scanf("%d", &choice) != 1)
		{
			while(getchar() != '\n')
				continue;
			fflush(NULL);
			puts("珍惜你的机会！");
			continue;
		}
		if(choice < num)
			puts("小心驶得万年船");
		else if(choice > num)
			puts("海纳百川，有容奶大");
		else
		{
			puts("恭喜猜中！");
			choice = num;
			break;
		}
	}
	//Stop_Music();
	if(choice == num)
	{
		puts("幸运女神在微笑。");
		Congratulation();
		value = 5.6;
	}
	else
	{
		Play_Music("CS炸弹拆除失败");
		puts("你可真是个小倒霉蛋。");
		value = 0.0;
		Sleep(1500);
		system("pause");
		//Stop_Music();
	}
	return value;
}

double Guess_game()
{
	int i = 0;
	char choice;
	double money = 0;
	printf("接下来进入第一个环节，通过可增加红包金额。。。\n");
	system("pause");
	system("cls");
	Sleep(800);
	system("color 81");
	Sleep(1000);
	while(i < 3)
	{
		system("cls");
		//Play_Music("欢乐斗地主");
		printf("Menu:\n");
		printf("L:简单模式");
		Print_ch(32, 15);
		printf("M:正常人玩的\n\n");
		Sleep(1000);
		printf("H:头脑发热才选");
		Print_ch(32, 11);
		printf("Q:不想玩\n\n");
		printf("请选择：");
		choice = getchar();
		while(getchar() != '\n')
			continue;
		choice = toupper(choice);
		//Stop_Music();
		if(choice == 'Q')
			break;
		switch(choice)
		{
		case 'L':
			money += L_game();
			break;
		case 'M':
			money += M_game();
			break;
		case 'H':
			money += H_game();
			break;
		default:
			printf("这波操作不对，请重新输入！\n");
			continue;
		}
		printf("可选择继续游戏或是退出.\n");
		i++;
	}
	system("cls");
	//Play_Music("LOL阿狸你渴望什么");
	if(money == 0)
	{
		printf("居然一个游戏都没通过，却获得KONGJING送上的终极高额专属红包：\n");
		Print_ch('*', 8);
		putchar('\n');
		printf("* 0.01 *\n");
		Print_ch('*', 8);
		putchar('\n');
		money = 0.01;
	}
	else
	{
		printf("第一轮游戏结束！获得红包：\n");
		Print_ch('*', 8);
		putchar('\n');
		printf("* %4.2lf *\n", money);
		Print_ch('*', 8);
		putchar('\n');
	}
	Stop_Music();
	system("pause");
	return money;
}
#define N 10
char * problem[N] = {
	"1 + 1 = ?",	//2
	"1 x 1 = ?",	//1
	"你参加赛跑，追过第2名，你是第几名？",	//2
	"一个物体在另一个物体表面滑动时，一定受到摩擦力作用?正确(0)/错误(1)",	//1
	"凭借NBA的一部宣传片，姚明完成了从单纯的“体育明星”转变到“体育、娱乐明星.(有语病输入1，否则输入0)",	//1
	"添一笔,增百倍,减一笔,少九成。 ——猜一个数字。",	//10
	"九九乘法表中从左到右，从下往上来看，第3列第4个算式的结果是多少？",	//18
	"有等式z = x^2 + y^2, 令x = 3^2 + 1, y = 7^2 + x + 1.\n问: y/(2x) = ?",	//3
	"配平: 2C2H2 + [a]O2 = [b]CO2 + 2H2O.问：a + b = ?",	//9
	"在等比数列{An}中，A2 = 2, A5 = 16,则A6 = ?"	//32
};

int  result[N] = {
	2, 1, 2, 1, 1, 10, 18, 3, 9, 32
};

void Problem_print(int num)
{
	printf("%s\n", problem[num]);
	return;
}

void Flush_screen(int space, int i)
{
	printf("本题%.2lf秒作答时间!\n", (double)space / 1000.0);
	Problem_print(i);
	Play_Music("闹钟滴答声");
	Sleep(space);
	Stop_Music();
	system("cls");
}
double Calc_game()
{
	int i, w_time;
	int solution;
	double time_1, time_2;
	double money = 0.0;
	system("cls");
	system("color a7");
	Play_Music("水果忍者游戏开始");
	printf("欢迎来到第二轮与时间竞赛游戏。。。\n");
	Sleep(1000);
	printf("在游戏中，屏幕会显示一些相关问题让你进行作答，准备好就开始吧！\n");
	Sleep(1500);
	system("pause");
	Stop_Music();
	//游戏开始
	system("color 40");
	for(i = 0; i < N; i++)
	{
		system("cls");
		Play_Music("间隔音效");
		Sleep(2000);
		Stop_Music();
		w_time = i * 500 + 2000;
		printf("第%d个问题：\n", i + 1);
		Flush_screen(w_time, i);
		time_1 = (double)clock() / 1000.0;
		printf("注意：你有2秒作答时间，超时则被视为失败\n");
		while(1)
		{
			time_2 = (double)clock() / 1000.0;
			if(time_2 - time_1 < 2)
			{
				printf("请输入刚才问题的结果：");
				scanf("%d", &solution);
				while(getchar() != '\n')
					continue;
				if(solution == result[i])
				{
					break;
				}
				else
				{
					printf("很可惜回答错误!\n");
				}
			}
			else
				break;
		}
		if(solution == result[i] && time_2 - time_1 < 2)
		{

			printf("结果正确！你太聪明了！\n");
			money += 0.75;
		}
		else
		{
			printf("很可惜，超时作答失败!\n");
		}
		system("pause");
	}
	return money;
}

double Money_game()
{
	int count = 0;
	double money = 0.0;
	double time1, time2;
	Play_Music("Welcome to Planet Urf - 英雄联盟");
	printf("接下来这个游戏请拿出你单身max年的手速！\n");
	system("pause");
	system("color 41");
	time1 = (double)clock() / 1000.0;
	puts("请疯狂敲击键盘!");
	while(time2 - time1 < 10)
	{
		time2 = (double)clock() / 1000.0;
		printf("加油，加油啊！");
		system("pause");
		if(time2 - time1 >= 10)
			break;
		count++;
	}
	system("cls");
	Sleep(1500);
	printf("真棒！你一共敲击键盘%d次！\n", count);
	money = count * 0.15;
	system("pause");
	Stop_Music();
	return money;
}