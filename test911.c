#include <stdio.h>




//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)    //EOF：end of file  文件结束标志
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");               //输入密码和回车键都会进入系统的输入缓冲区，此时password是对的，getchar（）读取到了回车数据（\n）
//	scanf("%s", password);
//	printf("请确认密码(Y/N)：> ", password);
//	ret = getchar();
//	if (ret == 'Y' || ret == 'y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("取消确认\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");            
//	scanf("%s", password);
//	//getchar();                              //取走缓冲区的数据，但只能取走一个
//	while ((ch = getchar()) != '\n');         //循环取，直到取到回车键（\n）
//	{
//		;
//	}
//	printf("请确认密码(Y/N)：>");
//	ret = getchar();                      
//	if (ret == 'Y' || ret == 'y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("取消确认\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0; 
//	while ((ch = getchar()) != EOF)         //只输出数字字符
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//for循环
//for(表达式1；表达式2；表达式3)               //表达式1只执行一次，用以初始化


//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			break;                    //break用来跳出循环 结果 1 2 3 4
//		    //continue;               //continue跳过本次循环之后的代码      
//		printf("%d ", i);
//	}
//	return 0;
//}

//建议1：不可在for循环体内修改循环变量，防止for循环失去控制
//例：
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i = 5)                   //赋值了
//			printf("haha");
//		printf("hehe");
//	}
//	return 0;
//}
//建议2：for语句中的循环控制变量采用“前闭合后开区间”的写法。
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
//for循环的初始化，调整，判断都可以省略
//但是
//for循环的判断部分如果被省略，则判断条件就是 恒为真


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;i < 10;i++)
//	{
//		for (;j < 10;j++)                  //此处取消了j=0，则循环一次之后，j=10，不会变为0，则只能打出10和 hehe
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
//	for (x = 0, y = 0;x < 2 && y < 5;++x, y++)          //++x 先加后赋值
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//do while 循环
//do
//    循环语句
//while（表达式）；
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
//			//continue;                  //打印1 2 3 4 后死循环
//			break;                       //打印1 2 3 4 
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

