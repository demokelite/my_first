#include<stdio.h>
#include<easyx.h>//图形界面 制作界面
#include<time.h>//用于伪随机数的头文件
#include<conio.h>//控制输入、输出的头文件
#include<mmsystem.h>//mm->多媒体，system系统
#pragma comment(lib,"winmm.lib")//win=windows 库文件

int ONE()
{
	srand(time(0));//设置时间种子，从而使伪随机数成为真正的随机数，其原理是用当前时间来刷新伪代码的开机时间
	initgraph(900,600);//创建窗口 
	//(横坐标，纵，L“内容”)
	setbkmode(0);//设置背景模式为透明
	int speed = 1;
	mciSendString("open Experience.mp3", 0, 0, 0);//打开音乐发送字符串指令
	mciSendString("play Experience.mp3", 0, 0, 0);
	int score = 0;//定义分数
	char str[5] = {0};
	while (1)
	{
	char letter;//定义一个字母
	int x, y;//定义坐标
	IMAGE bkimg;//IMAGE为图片的类型 定义图片
	loadimage(&bkimg,"烟绯.jpg");//加载图片
	IMAGE appleimg[2];
	loadimage(&appleimg[0], "011.jpg");
	loadimage(&appleimg[1], "001.jpg");//加载掩码图
	letter = 'A'+rand()%26;//利用伪随机数更改变量
	x = rand()%800;//0-799
	for (y = 0; y < 600; y+=speed)//实现字母下降的过程
	{
		BeginBatchDraw();
		putimage(0, 0, &bkimg);//输出背景图片
		outtextxy(800, 550, "知识混子开发");
		outtextxy(800, 530, "输入9关闭音乐");
		outtextxy(800, 510, "输入8暂停音乐");
		outtextxy(800, 490, "输入7继续音乐");
		outtextxy(800, 470, "输入6亚洲");
		outtextxy(800, 450, "输入5地狱");
		outtextxy(800, 430, "输入4困难");
		outtextxy(800, 410, "输入3更换音乐");
		outtextxy(800, 390, "输入2再加速");
		outtextxy(800, 370, "输入1加速");
		outtextxy(800, 570, "仅供学习");//在指定坐标输出文字
		putimage(x - 20, y - 20, &appleimg[1], SRCPAINT);
		putimage(x - 20, y - 20, &appleimg[0], SRCAND);
		outtextxy(x, y, letter);
		if (y == 600)
		{
			score -= 10;

		}
		sprintf_s(str,15,"分数%d",score);//整数转换字符串
		outtextxy(800,20,str);
		EndBatchDraw();
		if (_kbhit())//检测键盘的动作 如果有动作 返回1 否则 返回0
		{
			char key = _getch();
			//按到的是什么
			if (key==letter)
			{
				score += 10;
				break;//跳出循环
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
		
		Sleep(10);//延时
	}
	}
	system("pause");//暂停函数
	return 0;
}
int main()
{
	
	initgraph(900, 600);//创建窗口 
	setbkmode(0);//设置背景模式为透明
	while (1)
	{
		IMAGE bkimg;//IMAGE为图片的类型 定义图片
		loadimage(&bkimg, "烟绯.jpg");//加载图片
		putimage(0, 0, &bkimg);//输出背景图片
		BeginBatchDraw();
		outtextxy(410, 280, "1.进入游戏");
		outtextxy(410, 300, "2.退出游戏");
		EndBatchDraw();
		if (_kbhit())//检测键盘的动作 如果有动作 返回1 否则 返回0
		{
			char key = _getch();
			//按到的是什么
			if (key == '1')
			{
				ONE();
				break;//跳出循环
			}
			else
				break;
		}
		

	}
	//system("pause");
	return 0;
}







