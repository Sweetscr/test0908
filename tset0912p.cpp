#include <stdio.h>

//0~100֮�京��9������
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
//	printf("\n�ܼ��� %d ��",count);
//
//}



//����1/1+1/2+1/3+...1/100��ֵ
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		sum = sum + 1.0 / i;                     //Ҫ������С��������Ӻͷ�ĸ������һ��������
//	}
//	printf("%lf ", sum);
//	return 0;
//}


//����1/1+1/2+1/3+...1/100��ֵ
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

//��ʮ����֮������ֵ
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


//����Ļ�����9*9�˷���
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
//			printf("%d x %d = %-2d  ", x, y, pro);          //%2d�������Ϊ2λ��������Ϊһλ����ո���� ��%2d����䣻%-2d�����
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��������Ϸ
//1��1���Ի�����һ���������1~100��
//2��������
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**********��������Ϸ*************\n");
	printf("*********************************\n");
	printf("******1.play      0.exit*********\n");
	printf("*********************************\n");
}

void game()
{
	//1������һ�������
	int ret = 0;
	int guess = 0;
	//��ʱ����������������������ʼ��
	//time_t time��time_t *timer��
	//time_t
	ret = rand() % 100 + 1;  //����1~100�������
	//printf("%d\n",ret);
	while (1)
	{
		printf("������֣�>");
		scanf("%d" ,&guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
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
		printf("��ѡ��>��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();  //��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	return 0;
}



//ʱ�������ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0ʱ.0��.0�룩=��xxxxx����




//goto���

//ʹ�ó���
//for ����
//      for����
//            for����
//               {
//                  if��disaster��
//                      goto error;
//               }
//...
//error��
//if��disaster��
     //����������


//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60  �ػ�
//	//shutdown -a        ȡ���ػ�
//	//system����         ִ��ϵͳ����
//	system("shutdown -s -t 180");
//again:
//	printf("��ע�⣬���Խ���3���Ӻ�ػ��������롰��������ȡ���ػ�\n������");
//	scanf("%s", input);
//	if (strcmp(input, "����") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}