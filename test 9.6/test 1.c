#include <stdio.h>

//int main()
//{
//	int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	return 0;
//}


//#define MAX 10


//int main()
//{
////	const int num = 4;   //const-������   ��ʱ��numΪconst���εĳ����ԣ�
////	printf("%d\n", num);
////	//num = 8;          //��const֮�� num�޷��ı䣻
////	//printf("%d\n", num); 
//	//int arr[10] = { 0 };   //arr-��������
//	//const int n = 10;      //const���Խ�n��ɳ����ԣ�����Ȼ�Ǳ�����
//	//int arr[10] = { 0 };   //��arr[n]��ͨ������ΪnΪ��������
//	int arr[MAX] = { 0 };   //��MAXΪdefine���壬��Ϊ��ʶ��������
//	return 0;
//}


////ö�ٳ���
//enum Sex    //ö�ٹؼ�enum
//{
//    male,    //������ �� �����ţ������Ƿֺ�
//    female,
//    secret         //male,female,secretΪö�ٳ���
//};
//
//int main()
//{
//    printf("%d\n", male);
//    printf("%d\n", female);
//    printf("%d\n", secret);
//}


//enum Color
//{
//	RED,
//	YELLOW,
//	BULE
//};

//int main()
//{
//	enum Color color = BULE;
//	color = YELLOW;
//	printf("%d\n", color);
//	return 0;
//}


//"abcdefg";
//"";            �ַ������ɡ���������ַ������ַ�����������  ���ַ���

//int main()
//{
//	char arr1[] = "abcd";    //����洢�ַ���char arr2[] = { 'a','b','c','d' ,0};  
//	char arr2[] = { 'a','b','c','d','\0'};    //����0���ߡ�\0������������롣 ��\0�����ַ����Ľ�����־
//	printf("%s\n", arr1);  //�ַ�����ӡʹ�á�%s��
//	printf("%s\n", arr2);  
//	printf("%d\n", strlen(arr1));     //strlen-string length --�����ַ�������
//	printf("%d\n", strlen(arr2));
//	printf("abc\ndef\nopq\n");     //\n -- ת���ַ���   \t -- ˮƽ�Ʊ��
//	//ת���ַ��кܶࡣ \n ���С�\t ��������������һ�Ʊ�λ�ã���\v ��������\b �˸�\r �س���\f ��ֽ��ҳ��\\ ��б���ַ���\����\�� �������ַ���\a ���ᡣ\ddd 1��3λ�˽�������������ַ���\xhh 1��2λʮ����������������ַ���
//	printf("abc\\n");     //\\n -- ˫б�ܣ�ת�� \ ��ת���ַ�
//	return 0;
//}

//ASCII����


//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));  // \32�ǰ˽��ƴ����ʮ�������֣� ��ΪASCII��ֵ��������ַ�
//	printf("c:\test\32\test.c\n");
//	printf("%c\n",'\32');   // \32 8����  \x32  16����
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("ʦ����Ҫѧϰ�\n ��ѡ��1/0����");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("ʦ��ţ�ƣ�����\n");
//	else
//		printf("����ʺ������\n");
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf( " %d\n ����ʺ��", line );
//		line++;
//	}
//	if (line = 20000)
//		printf("���һ������ʺ\n");
//	return 0;
//}

//int ADD(int x, int y)    //���庯�� ADD   c�����к�����Ϊ�⺯�����Զ��庯����
//{
//	int z = x + y;
//	return z;
//}

//int main()
//{
//	//int a = 20;
//	//int b = 30;
//	//int sum = 0;
//	//sum = ADD(a, b);
//	//printf("%d\n", sum);
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//}



int main()
{
    //������ 
	// �ƣ������ƣ�λ������
    //<<����   >>����  
	int a = 1;
	int b = a << 2;
	printf("%d\n", a);
	printf("%d\n", b);   //bΪa�Ķ������е�1�ƶ���λ   a=00000...001=1   b=00000...100=4
	//��2���ƣ�λ����
	// & ��λ��
	// | ��λ��
	// ^ ��λ���   ���ļ������ ��Ӧ�Ķ�����λ��ͬ��Ϊ0����Ӧ�Ķ�����λ������Ϊ1��
	int c = 3;
	int d = 5;
	int e = c | d;
	printf("%d\n", e);
	//��ֵ������
	// = ��ֵ�� == �ж���� �� += ��-= ��/= ��^= ��<<= �� >>=  ���ϸ�ֵ��
	//a = a+10 �� a += 10 ��ȫ���

	//��Ŀ������  ��! �߼����������� !a�� ��- ��ֵ�� ��+ ��ֵ�� ��& ȡ��ַ�� ��sizeof �������/������ռ�ռ�Ĵ�С����λ���ֽڡ�
	int f = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a);
	printf("%d\n", sizeof(int));
	//˫Ŀ������   ���� a + b
	//��Ŀ������
	return 0;
}

