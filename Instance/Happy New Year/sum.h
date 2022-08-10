#ifndef _SUM_H_
#define _SUM_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<mmsystem.h>  
#pragma comment(lib,"Winmm.lib")

void Welcome();

void Play_Music(char *);
void Stop_Music();

void Del_file(char *);
void Print_ch(char, int);
double Guess_game();

double Calc_game();

double Money_game();

#endif