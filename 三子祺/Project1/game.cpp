#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void chushihua(char qipan[hang][lie], int Hang, int Lie)
{
	int i, j;
	for (i = 0; i < Hang; i++)
	{
		for (j = 0; j < Lie; j++)
		{
			qipan[i][j] = ' ';
		}
	}
}
void dayin(char qipan[hang][lie], int Hang, int Lie)
{
	int i = 0;
	for (i = 0; i < Hang; i++)
	{
		int j;
		for (j = 0; j < Lie; j++)
		{
			printf(" %c ", qipan[i][j]);
			if (j < Lie - 1)
				printf("|");
		}
		printf("\n");
		if (i < Hang - 1)
		{
			for (j = 0; j < Lie; j++)
			{
				printf("---");
				if (j < Lie - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void wanjia(char qipan[hang][lie], int Hang, int Lie)
{
	int x, y;
	while (1)
	{
		printf("输入坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= Hang && y >= 1 && y <= Lie)
		{
			if (qipan[x - 1][y - 1] == ' ')
			{
				qipan[x - 1][y - 1] = 'o';
				break;
			}
			else 
			{
				printf("已有棋子\n");
			}
		}
		else
		{
			printf("坐标错误\n");
		}
	}
}

void diannao(char qipan[hang][lie], int Hang, int Lie)
{
	int x, y;
	printf("对手：\n");
	while (1)
	{
		x = rand() % Hang;
		y = rand() % Lie;
		if (qipan[x][y] == ' ')
		{
			qipan[x][y] = 'X';
			break;
		}
	}

}

int pingjv(char qipan[hang][lie], int Hang, int Lie)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < Hang; i++)
	{
		for (j = 0; j < Lie; j++)
		{
			if (qipan[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char iswin(char qipan[hang][lie], int Hang, int Lie)
{
	int i;
	for (i = 0; i < Hang; i++)
	{
		if (qipan[i][0] == qipan[i][1] && qipan[i][1] == qipan[i][2] && qipan[i][1] != ' ')
		{
			return qipan[i][1];
		}
	}
	for (i = 0; i < Lie; i++)
	{
		if (qipan[0][i] == qipan[1][i] && qipan[1][i] == qipan[2][i] && qipan[1][i] != ' ')
		{
			return qipan[1][i];
		}
	}
	if (qipan[0][0] == qipan[1][1] && qipan[1][1] == qipan[2][2] && qipan[1][1] != ' ')
		return qipan[1][1];
	if (qipan[2][0] == qipan[1][1] && qipan[1][1] == qipan[0][2] && qipan[1][1] != ' ')
		return qipan[1][1];
	if (1 == pingjv(qipan, Hang, Lie))
	{
		return 'p';
	}
	return 'j';
}
