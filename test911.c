#include <stdio.h>




//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)    //EOF��end of file  �ļ�������־
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");               //��������ͻس����������ϵͳ�����뻺��������ʱpassword�ǶԵģ�getchar������ȡ���˻س����ݣ�\n��
//	scanf("%s", password);
//	printf("��ȷ������(Y/N)��> ", password);
//	ret = getchar();
//	if (ret == 'Y' || ret == 'y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȡ��ȷ��\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");            
//	scanf("%s", password);
//	//getchar();                              //ȡ�߻����������ݣ���ֻ��ȡ��һ��
//	while ((ch = getchar()) != '\n');         //ѭ��ȡ��ֱ��ȡ���س�����\n��
//	{
//		;
//	}
//	printf("��ȷ������(Y/N)��>");
//	ret = getchar();                      
//	if (ret == 'Y' || ret == 'y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȡ��ȷ��\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0; 
//	while ((ch = getchar()) != EOF)         //ֻ��������ַ�
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//forѭ��
//for(���ʽ1�����ʽ2�����ʽ3)               //���ʽ1ִֻ��һ�Σ����Գ�ʼ��


//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			break;                    //break��������ѭ�� ��� 1 2 3 4
//		    //continue;               //continue��������ѭ��֮��Ĵ���      
//		printf("%d ", i);
//	}
//	return 0;
//}

//����1��������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//����
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i = 5)                   //��ֵ��
//			printf("haha");
//		printf("hehe");
//	}
//	return 0;
//}
//����2��for����е�ѭ�����Ʊ������á�ǰ�պϺ����䡱��д����
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//forѭ���ĳ�ʼ�����������ж϶�����ʡ��
//����
//forѭ�����жϲ��������ʡ�ԣ����ж��������� ��Ϊ��


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;i < 10;i++)
//	{
//		for (;j < 10;j++)                  //�˴�ȡ����j=0����ѭ��һ��֮��j=10�������Ϊ0����ֻ�ܴ��10�� hehe
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0;x < 2 && y < 5;++x, y++)          //++x �ȼӺ�ֵ
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//do while ѭ��
//do
//    ѭ�����
//while�����ʽ����
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//continue;                  //��ӡ1 2 3 4 ����ѭ��
//			break;                       //��ӡ1 2 3 4 
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

