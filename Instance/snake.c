#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>
#include <mmsystem.h>  
#pragma comment(lib,"Winmm.lib")

#define MAPWIDTH 60
#define MAPHEIGHT 25
#define INIT_SNAKELENGTH 3
#define INIT_SNAKESPEED 200
#define BOUDARY "■" 
#define FOOD "★"
#define SNAKE "■" 
#define SNAKE_LENGTH 100
#define INFOR_COLS (MAPWIDTH + 5)
#define SCORE_LINES 4 
#define LENGTH_LINES (SCORE_LINES + 4)
#define BOUDARY_COLOR 9
#define SNAKE_BODY_COLOR 4
#define SNAKE_HEAD_COLOR 6
#define FOOD_COLOR 8
#define DEFAULT_COLOR 7

void setGUI(int foreColor, int bgColor, char* title);
void setCurrentPosition(int x, int y);
void printMap();
void keyDown();
int GameOver();
void ControlSpeed();
void printOBJ(char* object, int x, int y);
void createFood();
void printInformation();
void Play_Music(char * Music_Name);
void Stop_Music();
void setCOLOR(int foreColor, int bgColor);
/**
	0 = 黑色       8 = 灰色
	1 = 蓝色       9 = 淡蓝色
	2 = 绿色       A = 淡绿色
	3 = 浅绿色     B = 淡浅绿色
	4 = 红色       C = 淡红色
	5 = 紫色       D = 淡紫色
	6 = 黄色       E = 淡黄色
	7 = 白色       F = 亮白色
	*/

//keyboard
int key = 'a';
//snake eat food is 1, otherwise is 0
int eated = 0;
//The numbers of food 
int foodNumbers = 0;
//The Score of name
int currentScore = 0;

struct _Food
{
	int x;
	int y;
}food;

struct _Snake
{
	int x[SNAKE_LENGTH];
	int y[SNAKE_LENGTH];
	int len;
	int speed;
}snake;

void setCOLOR(int foreColor, int bgColor)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, foreColor + bgColor * 0x10);
}

/* void Play_Music(char * musicName)
{
	int length = 6 + strlen(musicName) + 4;
	char * music_address = (char *)malloc(sizeof(char) * (length + 1) );
	strcpy(music_address, "Music\\");
	strcat(music_address, musicName);
	strcat(music_address, ".wav");
	PlaySound(TEXT(music_address), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	free(music_address);
	return;
}

void Stop_Music()
{
	PlaySound(NULL, NULL, SND_FILENAME);
	return;
} */

/*
	设置光标的位置
*/
void setCurrentPosition(int x, int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(handle, coord);
	return;
}

/*
	打印函数：可打印并设置颜色，支持的类型 => 蛇体,蛇头,食物,地图块
*/
void printOBJ(char * object, int x, int y)
{
	if(x == 0 || x == MAPWIDTH || y == 0 || y == MAPHEIGHT)
	{
		setCOLOR(BOUDARY_COLOR, 0);
	}
	else 
		if(strcmp(object, SNAKE) == 0)
		{
			if(x == snake.x[0] && y == snake.y[0])
			{
				setCOLOR(SNAKE_HEAD_COLOR, 0);
			}
			else{
				setCOLOR(SNAKE_BODY_COLOR, 0);
			}
			
		}
	if(strcmp(object, FOOD) == 0)
	{
		setCOLOR(FOOD_COLOR, 0);
	}
	if(strcmp(object, "  ") == 0)
	{
		setCOLOR(DEFAULT_COLOR, 0);
	}
	setCurrentPosition(x, y);
	printf(object);
	setCOLOR(DEFAULT_COLOR, 0);
}

/*
	配置界面大小和颜色
*/
void setGUI(int height, int width, int foreColor, int bgColor,char * title)
{
	system("mode con cols=80 lines=30");
	setCOLOR(foreColor, bgColor);
	SetConsoleTitle(title);
}

/*
	控制移动速度，根据食物的数量调整
*/
void ControlSpeed()
{
	static int lastNumber = 2;
	if(foodNumbers >= lastNumber && snake.speed > 80)
	{
		snake.speed -= 50;
		lastNumber++;
	}
	Sleep(snake.speed);
}

int GameOver()
{
	int i;
	//snake to boudary
	if(snake.x[0] == 0 || snake.x[0] == MAPWIDTH || snake.y[0] == 0 || snake.y[0] == MAPHEIGHT)
	{
		return 1;
	}
	//snake to himself
	for(i = 1; i < snake.len; i++)
	{
		if(snake.x[0] == snake.x[i] && snake.y[0] == snake.y[i])
		{
			return 1;
		}
	}
	return 0;
}

void printInformation()
{
	//calcualate score
	currentScore = foodNumbers;
	//print score
	setCOLOR(15, 0);
	setCurrentPosition(INFOR_COLS, SCORE_LINES);
	printf("当前分数为：");
	setCurrentPosition(INFOR_COLS + 2, SCORE_LINES + 2);
	printf("%d", currentScore);
	setCurrentPosition(INFOR_COLS, LENGTH_LINES);
	printf("蛇的长度为：");
	setCurrentPosition(INFOR_COLS + 2, LENGTH_LINES + 2);
	printf("%d", snake.len);
}

void keyDown()
{
	int i;
	if(_kbhit())
	{
		int tempKey = _getch();
		fflush(stdin);
		key = tempKey;
	}
	if(!eated)
	{
		//This needs two space to delect trace
		printOBJ("  ", snake.x[snake.len - 1], snake.y[snake.len - 1]);
	}
	for(i = snake.len - 1; i > 0; i--)
	{
		snake.x[i] = snake.x[i - 1];
		snake.y[i] = snake.y[i - 1];
	}
	switch(key)
	{
		case 'w':
		case 'W':
		case 72:
			snake.y[0] -= 1; 
			break;
		case 's':
		case 'S':
		case 80:
			snake.y[0] += 1;
			break;
		case 'a':
		case 'A':
		case 75:
			snake.x[0] -= 2;
			break;
		case 'd':
		case 'D':
		case 77:
			snake.x[0] += 2;
			break;
	}
	printOBJ(SNAKE, snake.x[0], snake.y[0]);
	//replace last head color of snake 
	printOBJ(SNAKE, snake.x[1], snake.y[1]);
	eated = 0;
	setCurrentPosition(MAPHEIGHT + 1, 0);
}

void createFood()
{
	int i;
	srand(time(0));
	//if snake eat the food, you must be create new food
	if(snake.x[0] == food.x && snake.y[0] == food.y)
	{
		foodNumbers++;
		do{
			int isValidate = 1;
			//create new food
			food.x = rand() % (MAPWIDTH - 2 * 2) + 2;
			if(food.x % 2)
			{
				food.x++;
			}
			food.y = rand() % (MAPHEIGHT - 2) + 1;
			for(i = 0; i < snake.len; i++)
			{
				if(food.x == snake.x[i] && food.y == snake.y[i])
				{
					isValidate = 0;
					break;
				}
			}
			//create new food
			if(isValidate)
			{
				break;
			}
		}while(1);
		//print new food
		printOBJ(FOOD, food.x, food.y);
		if(snake.len < SNAKE_LENGTH)
		{
			snake.len++;
			eated = 1;
		}
		else{
			eated = 0;
		}
		
	}
	
}

void printMap()
{
	int i;
	srand(time(0));
	//print food   2 < x < mapwidth - 2    0 < % < mapwidth - 4 
	food.x = rand() % (MAPWIDTH - 2 * 2) + 2;
	if(food.x % 2)
	{
		food.x++;
	}
	food.y = rand() % (MAPHEIGHT - 2) + 1;
	printOBJ(FOOD, food.x, food.y);
	//print maps
	for(i = 0; i <= MAPWIDTH; i += 2)
	{ 
		printOBJ(BOUDARY, i, 0);
		printOBJ(BOUDARY, i, MAPHEIGHT);
	}
	for(i = 0; i < MAPHEIGHT; i++)
	{
		printOBJ(BOUDARY, 0, i);
		printOBJ(BOUDARY, MAPWIDTH, i);
	}
	//print snake
	snake.len = INIT_SNAKELENGTH;
	snake.speed = INIT_SNAKESPEED;
	snake.x[0] = MAPWIDTH / 2;
	if(snake.x[0] % 2)
	{
		snake.x[0]++;
	}
	snake.y[0] = MAPHEIGHT / 2;
	printOBJ(SNAKE, snake.x[0], snake.y[0]);
	for(i = 1; i < snake.len; i++) 
	{
		snake.x[i] = snake.x[i - 1] + 2;
		snake.y[i] = snake.y[i - 1];
		printOBJ(SNAKE, snake.x[i], snake.y[i]);
	}
}

int main(int * args, char * argc[])
{
	setGUI(7, 0, "SNAKE -Author KONGJING V1.0");
	printMap();
	while(1)
	{
		printInformation();
		keyDown();
		ControlSpeed();
		createFood();
		if(GameOver())
		{
			break;
		}
	}
	setCurrentPosition(MAPWIDTH / 2, MAPHEIGHT / 2);
	printf("GameOver!");
	setCurrentPosition(MAPWIDTH / 2, MAPHEIGHT / 2 + 1);
	system("pause");
	return 0;
}