#include<stdio.h>
#include<easyx.h>//ͼ�ν��� ��������
#include<time.h>//����α�������ͷ�ļ�
#include<conio.h>//�������롢�����ͷ�ļ�
#include<mmsystem.h>//mm->��ý�壬systemϵͳ
#pragma comment(lib,"winmm.lib")//win=windows ���ļ�

int ONE()
{
	srand(time(0));//����ʱ�����ӣ��Ӷ�ʹα�������Ϊ���������������ԭ�����õ�ǰʱ����ˢ��α����Ŀ���ʱ��
	initgraph(900,600);//�������� 
	//(�����꣬�ݣ�L�����ݡ�)
	setbkmode(0);//���ñ���ģʽΪ͸��
	int speed = 1;
	mciSendString("open Experience.mp3", 0, 0, 0);//�����ַ����ַ���ָ��
	mciSendString("play Experience.mp3", 0, 0, 0);
	int score = 0;//�������
	char str[5] = {0};
	while (1)
	{
	char letter;//����һ����ĸ
	int x, y;//��������
	IMAGE bkimg;//IMAGEΪͼƬ������ ����ͼƬ
	loadimage(&bkimg,"���.jpg");//����ͼƬ
	IMAGE appleimg[2];
	loadimage(&appleimg[0], "011.jpg");
	loadimage(&appleimg[1], "001.jpg");//��������ͼ
	letter = 'A'+rand()%26;//����α��������ı���
	x = rand()%800;//0-799
	for (y = 0; y < 600; y+=speed)//ʵ����ĸ�½��Ĺ���
	{
		BeginBatchDraw();
		putimage(0, 0, &bkimg);//�������ͼƬ
		outtextxy(800, 550, "֪ʶ���ӿ���");
		outtextxy(800, 530, "����9�ر�����");
		outtextxy(800, 510, "����8��ͣ����");
		outtextxy(800, 490, "����7��������");
		outtextxy(800, 470, "����6����");
		outtextxy(800, 450, "����5����");
		outtextxy(800, 430, "����4����");
		outtextxy(800, 410, "����3��������");
		outtextxy(800, 390, "����2�ټ���");
		outtextxy(800, 370, "����1����");
		outtextxy(800, 570, "����ѧϰ");//��ָ�������������
		putimage(x - 20, y - 20, &appleimg[1], SRCPAINT);
		putimage(x - 20, y - 20, &appleimg[0], SRCAND);
		outtextxy(x, y, letter);
		if (y == 600)
		{
			score -= 10;

		}
		sprintf_s(str,15,"����%d",score);//����ת���ַ���
		outtextxy(800,20,str);
		EndBatchDraw();
		if (_kbhit())//�����̵Ķ��� ����ж��� ����1 ���� ����0
		{
			char key = _getch();
			//��������ʲô
			if (key==letter)
			{
				score += 10;
				break;//����ѭ��
			}
			
			
				if (key=='1')
				{
					speed = 2;
				}
				if (key=='2')
				{
					speed = 3;

				}
				if (key=='3')
				{
					mciSendString("close Experience.mp3", 0, 0, 0);
					mciSendString("open lullaby.mp3", 0, 0, 0);
					mciSendString("play lullaby.mp3", 0, 0, 0);
				}
				if (key=='9')
				{
					mciSendString("close Experience.mp3", 0, 0, 0);
					mciSendString("close lullaby.mp3", 0, 0, 0);
				}
				if (key=='8')
				{
				    mciSendString("pause Experience.mp3", 0, 0, 0);
					mciSendString("pause lullaby.mp3", 0, 0, 0);
				}
				if (key=='7')
				{
					speed = 4;
				}
				if (key=='4')
				{
					speed = 5;
				}
				if (key=='5')
				{
					speed = 6;
				}
				if (key=='6')
				{
					speed = 7;
				}
		}
		
		Sleep(10);//��ʱ
	}
	}
	system("pause");//��ͣ����
	return 0;
}
int main()
{
	
	initgraph(900, 600);//�������� 
	setbkmode(0);//���ñ���ģʽΪ͸��
	while (1)
	{
		IMAGE bkimg;//IMAGEΪͼƬ������ ����ͼƬ
		loadimage(&bkimg, "���.jpg");//����ͼƬ
		putimage(0, 0, &bkimg);//�������ͼƬ
		BeginBatchDraw();
		outtextxy(410, 280, "1.������Ϸ");
		outtextxy(410, 300, "2.�˳���Ϸ");
		EndBatchDraw();
		if (_kbhit())//�����̵Ķ��� ����ж��� ����1 ���� ����0
		{
			char key = _getch();
			//��������ʲô
			if (key == '1')
			{
				ONE();
				break;//����ѭ��
			}
			else
				break;
		}
		

	}
	//system("pause");
	return 0;
}







