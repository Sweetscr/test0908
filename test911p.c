#include <stdio.h>

#include <string.h>
#include <windows.h>
#include <stdlib.h>



//1、计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int result = 1;
//	printf("输入数字，得其阶乘： \n");
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		result = result * i;
//	}
//	printf("%d ", result);
//	return 0;
//}




//2、计算1！+2！+3！+...10！
//int main()                          //方法1 自己写
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

//int main()                        //方法2 课堂
//{
//	int i = 0;
//	int j = 0;
//	int result1 = 1;
//	int result2 = 0;
//	for (i = 1;i <= 3;i++)
//	{
//		result1 = 1;
//		for (j = 1;j <= i;j++)             //result1的值未重置；若没有result1=1；result1一直为前值（（n-1）！）
//		{ 
//			result1 = result1 * j;
//		}
//		result2 = result2 + result1;
//	}
//	printf("%d ", result2);
//	return 0;
//}


//int main()                        //方法3 课堂优化
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




//3、在一个有序数组中查找具体的某个数字n，编写int binsearch（int x,int v[],int n）；功能：在v[0]<=v[1]<=v[2]...<=v[n-1]的数组中查找x
//int main()                                        //方法1：普通做法，逐个查找
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//折半查找算法； 又称二分查找算法
//找的最多的次数是log2（n）
//int main()                                        //方法2：二分查找算法
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
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}





//编写代码，演示多个字符从两端移动，向中间汇聚
//char arr[]={1，2，3}  共 1 2 3 3个  ；   但是char arr[]={a,b,c}  里面有 a b c \0 四个  ；只有字符串有 " \0 "
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




//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次代码，若密码正确则提示登录成果，如果三次均输入错误，则退出程序）
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0;i < 3;i++)
	{
		printf("请输入密码：> \n");
		scanf("%s", password);
		if (strcmp(password , "123456") ==0 )                     //==不能用来比较两个字符串是否相等，应该采用一个库函数 “strcmp”,正确的输出 0
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (3 == i)
	{
		printf("登录失败\n");
	}
	return 0;
}