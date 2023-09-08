#include <stdio.h>  //stdio = standard input output

int g_val = 2021;

//void main()   //void 定义函数，与int相比，不用结尾return 0.但是常用的还是int
//{
//	printf("hello world\n");
//}

//int main()
//{
//	printf("hehe\n");  //“\n”输出换行
//	return 0;
//}

//%c--打印字符
//%d--打印整型
//%f--打印浮点数字（即小数）
//%p--以地址的形式打印
//%x--打印16进制数字
//...

//char --字符数据类型
//short --短整型
//int -- 整型
//long -- 长整型
//long long --更长的整型
//float --单精度浮点数
//double --双精度浮点数



//int main()
//{
	//char ch = 'A';  //char 字符类型，分配内存
	//("%c\n",ch);  //%c--打印字符格式的数据
	//int age = 20;  //int 整型
	//printf("%d\n", age);  //%d--打印整型十进制数据
	//float f = 5.20;  //浮点型
	//printf("%f\n", f);
	//double d = 3.141;
	//printf("%lf\n", d);  //"%lf"--双精度浮点型
	//return 0;
//}

//bit - 比特位  只能存放一个1或者一个0
//byte - 字节    一个字节=8个比特位
//kb  -  等于1024个byte
//mb -等于1024个kb

//int main()
//{
	//printf("%d\n", sizeof(char));   //sizeof -- 查看char字符串的长度  1
	//printf("%d\n", sizeof(int));   //4
	//printf("%d\n", sizeof(long));  //4或者8
	//printf("%d\n", sizeof(long long));  //8
	//printf("%d\n", sizeof(float));  //4
	//return 0;
//}

// ctrl + K + C -- 多行注释    ctrl + K + U -- 取消多行注释

//int main()
//{
//	short age = 20;
//	float weight = 96.5f;  //编译器默认小数精度是双精度浮点型，若想用float定义，可以在数字后面加“f”，如“96.5f”
//	return 0;
//}

//int num2 = 20;  //全局变量  定义在代码块之外

//int main()
//{ 
//	int num2 = 10;  //局部变量  定义在代码块内
//	printf("%d\n", num2);  //输出结果为10，因此当局部变量与全局变量名字相同时，以局部变量优先。但是尽量不要相同，因为容易误会，产生bug。
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;    //C语言语法规定，变量定义要在当前代码前
//	scanf("%d %d", &num1, &num2); //&-取地址符号     scanf--输入数据，使用数据函数，但在vs2019之后删除，改为scanf_s
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}