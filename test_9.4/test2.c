#include <stdio.h>  //stdio = standard input output

int main()
{
	extern int g_val;  //ȫ�ֱ����ĺ�������������Ŀ�о�����ʹ�ã�������Ҫ��������������ʱ��ʹ�� ��extern���������ⲿ���ţ�
	printf("test2 = %d\n", g_val);
	return 0;
}


//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);  //�˴�����ʹ��
//	}
//	//printf("%d\n", a); //�˴�����ʹ����
//	return 0;
//}