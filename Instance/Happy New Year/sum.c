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
	//Play_Music("�������");
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
	printf("*                                   ���굽ϲӭ�ţ��ͻ�����ף��,Ը���´����֣���������                                  *\n");
	Sleep(500);
	putchar('*');
	Print_ch(32, 118);
	printf("*\n");
	printf("*                                                 �ؼһ��֣�����˳��                                                   *\n");
	Sleep(500);
	putchar('*');
	Print_ch(32, 118);
	printf("*\n");
	printf("*                                                 ���Ǹ��գ�������                                                   *\n");
	Sleep(500);
	putchar('*');
	Print_ch(32, 118);
	printf("*\n");
	printf("*                                                 �Ҹ�����������һ��                                                   *\n");
	Sleep(500);
	PlayWelcomeStar(5);
	Print_ch('*', 120);
	Sleep(2500);
	system("pause");
	Stop_Music();
}

void Congratulation()
{
	//Play_Music("��Ϸʤ������");
	Sleep(2000);
	printf("��ѡ�������Ϸ�����˳�.\n");
	system("pause");
	//Stop_Music();
} 

double L_game()
{
	int num, result = 74; 
	double value = 0.0;
	//Play_Music("S14����������Ч");
	printf("����2z=x^2+y^2��ƽ��x+3y+2z=3�س�һ���棬��ԭ�㵽��������������������.\n");
	while(1)
	{
		printf("��������Ľ��(����0�˳�)��");
		scanf("%d", &num);
		while(getchar() != '\n')
			continue;
		fflush(NULL);
		if(num == 0)
			break;
		if(num == result)
			break;
		printf("������ԣ�����Ŭ����!\n");
	}
	//Stop_Music();
	if(value == 0)
	{
		Play_Music("��Ϸʧ����Ч");
		printf("��Ϸʧ�ܣ�\n");
		Sleep(2000);
		system("pause");
		Stop_Music();
	}
	else
	{
		printf("��ϲ�õ���ȷ�����\n");
		Congratulation();
		value = 2.50;
	}
	return value;
}


double M_game()
{
	int i;
	char * word[] = {
		"�����Ͳ���������ǧ�����С�������Գɽ���������Kong",
		"��Ҫʧȥ���ģ�ֻҪ��ֲ�и�����ջ��гɹ��ġ������޵л���ǿ",
		"����ʲô��������־������ʵ����־�����Ը���˴�������������������KJ",
		"�ɴ��²����������Ĵ�С���������ܼ�ֶ�á��������ǿ",
		"�����ߣ�������һ������é®�����ᷢ���ߣ���Ҫ���������������˵���Į�ͻ��ɣ����ܼ���Լ����ֵ���־�������о�������ȥ����������ǿ",
		"����������ƶ�������ƣ����䲻����������ǿ��",
		"������ʹ�ҴﵽĿ��İ��ذɣ���Ψһ�����������ҵļ�־��񡣡���KONGJING",
		"���к㣬�α�����������ߡ������棬ֻ��һ����ʮ�պ�������KongJing",
		"��Ȼ���Ѿ�̤��������·����ô���κζ�������Ӧ��������������·����ȥ������CHQ",
		"丵�֮ˮ�տ���ĥ���ʯ����������������ǿ�󣬶���������ҹ����ĵ�׹��������",
		"û��ΰ�����־�����Ͳ��������۲Ŵ��ԡ� ����Chq",
		"��־�ù�������Ȼ�������ѿ����δ�иɣ������иɣ���δ��֦��֦����Ҷ��Ҷ���󻨡������վ�",
		"����Ӧ���������Լ������Լ������������ģ������������ǿ��˷��ϰ���������־�Ͷ�����־����õġ�������",
		"���Ȼ�����Ի�ΰ���һ������ô��Ӧ�ôӽ������Ժ�����ҡ�ľ��ĺͼᶨ���Ƶ����ƾ�Լ����ǻۺ�������ȥ�����������Ŀ��֡�����KongJingؼC",
		"���ͺͼ������ʹ������飬��ȴ�ܽ�����Ϊ������ô��������վ�ؼC",
		"���������ֻ����־��ǿ���ˣ����ܵ���˰�������Jing"
	};
	double value = 0;
	int num;
	//Play_Music("����Ԥ��Ƭͷ��");
	system("cls");
	system("color 91");
	printf("������������һ���ǳ���(wu)Ȥ(liao)����Ϸ.\n");
	for(i = 0; i < 99; i++)
	{
		num = (int)rand() * 9999 % 15;
		Print_ch('*', 120);
		printf("\n��%d���û�����!\t", i + 1);
		if( (i + 1) % 25 == 0)
		{
			printf("�����������ȥ������;����(q):");
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
		puts("��ϲ����");
		Congratulation();
		puts("���Ȼ�Ǹ������ˣ�");
		value = 3.90;
	}
	else
	{
		//Play_Music("ֲ���ս��ʬʧ��");
		puts("��Ե���������ӡ�����");
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
	//Play_Music("LOLӾ���ɶ���Ч");
	srand(time(0));
	num  = (int)rand() * 9999 % 10 + 1;
	system("cls");
	system("color d0");
	printf("��������Ϸ!(���λ��ᣬ�������ʾ��Ϣ)\n");
	while(count++ < 3)
	{
		printf("�²�����˭��");
		if(scanf("%d", &choice) != 1)
		{
			while(getchar() != '\n')
				continue;
			fflush(NULL);
			puts("��ϧ��Ļ��ᣡ");
			continue;
		}
		if(choice < num)
			puts("С��ʻ�����괬");
		else if(choice > num)
			puts("���ɰٴ��������̴�");
		else
		{
			puts("��ϲ���У�");
			choice = num;
			break;
		}
	}
	//Stop_Music();
	if(choice == num)
	{
		puts("����Ů����΢Ц��");
		Congratulation();
		value = 5.6;
	}
	else
	{
		Play_Music("CSը�����ʧ��");
		puts("������Ǹ�С��ù����");
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
	printf("�����������һ�����ڣ�ͨ�������Ӻ��������\n");
	system("pause");
	system("cls");
	Sleep(800);
	system("color 81");
	Sleep(1000);
	while(i < 3)
	{
		system("cls");
		//Play_Music("���ֶ�����");
		printf("Menu:\n");
		printf("L:��ģʽ");
		Print_ch(32, 15);
		printf("M:���������\n\n");
		Sleep(1000);
		printf("H:ͷ�Է��Ȳ�ѡ");
		Print_ch(32, 11);
		printf("Q:������\n\n");
		printf("��ѡ��");
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
			printf("�Ⲩ�������ԣ����������룡\n");
			continue;
		}
		printf("��ѡ�������Ϸ�����˳�.\n");
		i++;
	}
	system("cls");
	//Play_Music("LOL���������ʲô");
	if(money == 0)
	{
		printf("��Ȼһ����Ϸ��ûͨ����ȴ���KONGJING���ϵ��ռ��߶�ר�������\n");
		Print_ch('*', 8);
		putchar('\n');
		printf("* 0.01 *\n");
		Print_ch('*', 8);
		putchar('\n');
		money = 0.01;
	}
	else
	{
		printf("��һ����Ϸ��������ú����\n");
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
	"��μ����ܣ�׷����2�������ǵڼ�����",	//2
	"һ����������һ��������滬��ʱ��һ���ܵ�Ħ��������?��ȷ(0)/����(1)",	//1
	"ƾ��NBA��һ������Ƭ��Ҧ������˴ӵ����ġ��������ǡ�ת�䵽����������������.(���ﲡ����1����������0)",	//1
	"��һ��,���ٱ�,��һ��,�پųɡ� ������һ�����֡�",	//10
	"�žų˷����д����ң�����������������3�е�4����ʽ�Ľ���Ƕ��٣�",	//18
	"�е�ʽz = x^2 + y^2, ��x = 3^2 + 1, y = 7^2 + x + 1.\n��: y/(2x) = ?",	//3
	"��ƽ: 2C2H2 + [a]O2 = [b]CO2 + 2H2O.�ʣ�a + b = ?",	//9
	"�ڵȱ�����{An}�У�A2 = 2, A5 = 16,��A6 = ?"	//32
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
	printf("����%.2lf������ʱ��!\n", (double)space / 1000.0);
	Problem_print(i);
	Play_Music("���ӵδ���");
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
	Play_Music("ˮ��������Ϸ��ʼ");
	printf("��ӭ�����ڶ�����ʱ�侺����Ϸ������\n");
	Sleep(1000);
	printf("����Ϸ�У���Ļ����ʾһЩ������������������׼���þͿ�ʼ�ɣ�\n");
	Sleep(1500);
	system("pause");
	Stop_Music();
	//��Ϸ��ʼ
	system("color 40");
	for(i = 0; i < N; i++)
	{
		system("cls");
		Play_Music("�����Ч");
		Sleep(2000);
		Stop_Music();
		w_time = i * 500 + 2000;
		printf("��%d�����⣺\n", i + 1);
		Flush_screen(w_time, i);
		time_1 = (double)clock() / 1000.0;
		printf("ע�⣺����2������ʱ�䣬��ʱ����Ϊʧ��\n");
		while(1)
		{
			time_2 = (double)clock() / 1000.0;
			if(time_2 - time_1 < 2)
			{
				printf("������ղ�����Ľ����");
				scanf("%d", &solution);
				while(getchar() != '\n')
					continue;
				if(solution == result[i])
				{
					break;
				}
				else
				{
					printf("�ܿ�ϧ�ش����!\n");
				}
			}
			else
				break;
		}
		if(solution == result[i] && time_2 - time_1 < 2)
		{

			printf("�����ȷ����̫�����ˣ�\n");
			money += 0.75;
		}
		else
		{
			printf("�ܿ�ϧ����ʱ����ʧ��!\n");
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
	Play_Music("Welcome to Planet Urf - Ӣ������");
	printf("�����������Ϸ���ó��㵥��max������٣�\n");
	system("pause");
	system("color 41");
	time1 = (double)clock() / 1000.0;
	puts("�����û�����!");
	while(time2 - time1 < 10)
	{
		time2 = (double)clock() / 1000.0;
		printf("���ͣ����Ͱ���");
		system("pause");
		if(time2 - time1 >= 10)
			break;
		count++;
	}
	system("cls");
	Sleep(1500);
	printf("�������һ���û�����%d�Σ�\n", count);
	money = count * 0.15;
	system("pause");
	Stop_Music();
	return money;
}