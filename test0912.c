#include <stdio.h>



//�Ӵ�С���������ֵ
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

//��ӡ3�ı�������(1~100֮��)
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


//�����Լ��  շת�����
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

//��ӡ1000~2000��֮�������
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


//��ӡ100~200֮�������
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100;i <= 200;i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//�����жϹ���
		//1���Գ���
		int j = 0;
		//for (j = 2;j < i; j++)
		for (j = 2;j <= sqrt(i); j++)            //�Ż������������ܱ��������˵���ʽ������һ������ȻС�ڵ���i�Ŀ�ƽ��
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