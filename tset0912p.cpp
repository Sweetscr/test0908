#include <stdio.h>

//0~100之间含有9的数字
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n总计有 %d 个",count);
//
//}



//计算1/1+1/2+1/3+...1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		sum = sum + 1.0 / i;                     //要想结果有小数，则分子和分母至少有一个浮点型
//	}
//	printf("%lf ", sum);
//	return 0;
//}


//计算1/1+1/2+1/3+...1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum += flag*1.0 / i; 
//		flag = -flag;
//	}
//	printf("%lf ", sum);
//	return 0;
//}

//求十个数之间的最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1;i <= sz;i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d ", max);
//	return 0;
//}


//在屏幕上输出9*9乘法口
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int pro = 0;
//	for (x = 1;x < 10;x++)
//	{
//		for (y = 1;y <= x;y++)
//		{
//			pro = x * y;
//			printf("%d x %d = %-2d  ", x, y, pro);          //%2d代表输出为2位，若数字为一位，则空格填充 。%2d右填充；%-2d左填充
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜数字游戏
//1、1电脑会生成一个随机数（1~100）
//2、猜数字
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**********猜数字游戏*************\n");
	printf("*********************************\n");
	printf("******1.play      0.exit*********\n");
	printf("*********************************\n");
}

void game()
{
	//1、生成一个随机数
	int ret = 0;
	int guess = 0;
	//拿时间戳来设置随机数的生成起始点
	//time_t time（time_t *timer）
	//time_t
	ret = rand() % 100 + 1;  //生成1~100的随机数
	//printf("%d\n",ret);
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d" ,&guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}

	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();  //猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
}



//时间戳：当前计算机的时间-计算机的起始时间（1970.1.1.0时.0分.0秒）=（xxxxx）秒




//goto语句

//使用场景
//for （）
//      for（）
//            for（）
//               {
//                  if（disaster）
//                      goto error;
//               }
//...
//error：
//if（disaster）
     //处理错误情况


//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60  关机
//	//shutdown -a        取消关机
//	//system（）         执行系统命令
//	system("shutdown -s -t 180");
//again:
//	printf("请注意，电脑将于3分钟后关机。若输入“笨蛋”则取消关机\n请输入");
//	scanf("%s", input);
//	if (strcmp(input, "笨蛋") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}