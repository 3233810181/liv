#pragma once
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#define hang 3
#define lie 3

void chushihua(char qipan[hang][lie], int Hang, int Lie);
void dayin(char qipan[hang][lie], int Hang, int Lie);
void wanjia(char qipan[hang][lie], int Hang, int Lie);
void diannao(char qipan[hang][lie], int Hang, int Lie);
char iswin(char qipan[hang][lie], int Hang, int Lie);