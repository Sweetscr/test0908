#include <stdio.h>

#include <string.h>
#include <windows.h>
#include <stdlib.h>



//1������n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int result = 1;
//	printf("�������֣�����׳ˣ� \n");
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		result = result * i;
//	}
//	printf("%d ", result);
//	return 0;
//}




//2������1��+2��+3��+...10��
//int main()                          //����1 �Լ�д
//{
//	int i = 0;
//	int j = 0;
//	int result1 = 1;
//	int result2 = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		for (j = i;j <= i;j++)
//		{ 
//			result1 = result1 * j;
//		}
//		result2 = result2 + result1;
//	}
//	printf("%d ", result2);
//	return 0;
//}

//int main()                        //����2 ����
//{
//	int i = 0;
//	int j = 0;
//	int result1 = 1;
//	int result2 = 0;
//	for (i = 1;i <= 3;i++)
//	{
//		result1 = 1;
//		for (j = 1;j <= i;j++)             //result1��ֵδ���ã���û��result1=1��result1һֱΪǰֵ����n-1������
//		{ 
//			result1 = result1 * j;
//		}
//		result2 = result2 + result1;
//	}
//	printf("%d ", result2);
//	return 0;
//}


//int main()                        //����3 �����Ż�
//{
//	int i = 0;
//	int j = 0;
//	int result1 = 1;
//	int result2 = 0;
//	for (i = 1;i <= 3;i++)
//	{
//		result1 = result1 * i;
//		result2 = result2 + result1;
//	}
//	printf("%d ", result2);
//	return 0;
//}




//3����һ�����������в��Ҿ����ĳ������n����дint binsearch��int x,int v[],int n�������ܣ���v[0]<=v[1]<=v[2]...<=v[n-1]�������в���x
//int main()                                        //����1����ͨ�������������
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//�۰�����㷨�� �ֳƶ��ֲ����㷨
//�ҵ����Ĵ�����log2��n��
//int main()                                        //����2�����ֲ����㷨
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}





//��д���룬��ʾ����ַ��������ƶ������м���
//char arr[]={1��2��3}  �� 1 2 3 3��  ��   ����char arr[]={a,b,c}  ������ a b c \0 �ĸ�  ��ֻ���ַ����� " \0 "
//int main()
//{
//	char arr1[] = { "welcome to china!!!" };
//	char arr2[] = { "###################" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}




//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ�����������δ��룬��������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0;i < 3;i++)
	{
		printf("���������룺> \n");
		scanf("%s", password);
		if (strcmp(password , "123456") ==0 )                     //==���������Ƚ������ַ����Ƿ���ȣ�Ӧ�ò���һ���⺯�� ��strcmp��,��ȷ����� 0
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (3 == i)
	{
		printf("��¼ʧ��\n");
	}
	return 0;
}