//˳��ṹ
//ѡ��ṹ
//ѭ���ṹ

#include <stdio.h>

//��֧��䣨ѡ��ṹ����


//int main()
//{
//	int a = 0;    //;  �ֺŴ���������
//	;     //����һ���ֺ�Ҳ��һ����䣬�����
//	return 0;
//}

//if (���ʽ)
//    ���1
//else if(���ʽ2)
//    ���2
//else�����ʽ3��
//    ���3

int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 17)
		printf("δ����\n");
	else if (18 <= age && age<= 40)
		printf("����\n");
	else if (41 <= age && age<= 65)
		printf("����\n");
	else
		printf("����\n");
	return 0;
}