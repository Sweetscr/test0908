#include <stdio.h>  //stdio = standard input output

int g_val = 2021;

//void main()   //void ���庯������int��ȣ����ý�βreturn 0.���ǳ��õĻ���int
//{
//	printf("hello world\n");
//}

//int main()
//{
//	printf("hehe\n");  //��\n���������
//	return 0;
//}

//%c--��ӡ�ַ�
//%d--��ӡ����
//%f--��ӡ�������֣���С����
//%p--�Ե�ַ����ʽ��ӡ
//%x--��ӡ16��������
//...

//char --�ַ���������
//short --������
//int -- ����
//long -- ������
//long long --����������
//float --�����ȸ�����
//double --˫���ȸ�����



//int main()
//{
	//char ch = 'A';  //char �ַ����ͣ������ڴ�
	//("%c\n",ch);  //%c--��ӡ�ַ���ʽ������
	//int age = 20;  //int ����
	//printf("%d\n", age);  //%d--��ӡ����ʮ��������
	//float f = 5.20;  //������
	//printf("%f\n", f);
	//double d = 3.141;
	//printf("%lf\n", d);  //"%lf"--˫���ȸ�����
	//return 0;
//}

//bit - ����λ  ֻ�ܴ��һ��1����һ��0
//byte - �ֽ�    һ���ֽ�=8������λ
//kb  -  ����1024��byte
//mb -����1024��kb

//int main()
//{
	//printf("%d\n", sizeof(char));   //sizeof -- �鿴char�ַ����ĳ���  1
	//printf("%d\n", sizeof(int));   //4
	//printf("%d\n", sizeof(long));  //4����8
	//printf("%d\n", sizeof(long long));  //8
	//printf("%d\n", sizeof(float));  //4
	//return 0;
//}

// ctrl + K + C -- ����ע��    ctrl + K + U -- ȡ������ע��

//int main()
//{
//	short age = 20;
//	float weight = 96.5f;  //������Ĭ��С��������˫���ȸ����ͣ�������float���壬���������ֺ���ӡ�f�����硰96.5f��
//	return 0;
//}

//int num2 = 20;  //ȫ�ֱ���  �����ڴ����֮��

//int main()
//{ 
//	int num2 = 10;  //�ֲ�����  �����ڴ������
//	printf("%d\n", num2);  //������Ϊ10����˵��ֲ�������ȫ�ֱ���������ͬʱ���Ծֲ��������ȡ����Ǿ�����Ҫ��ͬ����Ϊ������ᣬ����bug��
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;    //C�����﷨�涨����������Ҫ�ڵ�ǰ����ǰ
//	scanf("%d %d", &num1, &num2); //&-ȡ��ַ����     scanf--�������ݣ�ʹ�����ݺ���������vs2019֮��ɾ������Ϊscanf_s
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}