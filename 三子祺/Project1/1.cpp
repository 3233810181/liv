#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void caidan()
{
	printf("1.三子棋 0.结束游戏\n");
}

void game()
{
	char win = 0;
	char qipan[hang][lie];
	chushihua(qipan, hang, lie);
	dayin(qipan, hang, lie);
	while (1)
	{
		wanjia(qipan, hang, lie);
		dayin(qipan, hang, lie);
		win = iswin(qipan,hang,lie);
		if (win != 'j')
		{
			break;
		}
		diannao(qipan, hang, lie);
		dayin(qipan, hang, lie);
		win = iswin(qipan,hang,lie);
		if (win != 'j')
		{
			break;
		}
	}
	if (win == 'o')
	{
		printf("赢了\n");
	}
	else if (win == 'X')
	{
		printf("输了\n");
	}
	else
	{
		printf("平局\n");
	}
}

void kaitou()
{
	int du;
	int xuan;
	srand((unsigned int)time(NULL));
	do {
		caidan();
		scanf("%d", &xuan);
		while ((du = getchar()) != '\n') { ; }
		switch (xuan)
		{
		case 1:
			game();
			printf("开始游戏：\n");
			break;
		case 0:
			printf("结束游戏：\n");
			break;
		default:
			printf("选择无效：\n");
			break;
		}
	} while (xuan);
}

int main()
{
	kaitou();
	return 0;
}