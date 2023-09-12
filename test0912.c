#include <stdio.h>



//从大到小输出三个数值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//打印3的倍数的数(1~100之内)
//int main()
//{
//	int i = 0;
//	for (i = 3;i <= 100;i += 3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//求最大公约数  辗转相除法
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n ", n);
//	return 0;
//}

//打印1000~2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//	}
//	printf("\n count %d ", count);
//	return 0;
//}


//打印100~200之间的素数
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100;i <= 200;i++)
	{
		//判断i是否为素数
		//素数判断规则：
		//1、试除法
		int j = 0;
		//for (j = 2;j < i; j++)
		for (j = 2;j <= sqrt(i); j++)            //优化：非素数必能变成两数相乘的形式，其中一个数必然小于等于i的开平方
		{
			if (i % j == 0)
			{
				break;
			}
		}
		//if (j == i)
		if(j>sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d", count);
	return 0;
}