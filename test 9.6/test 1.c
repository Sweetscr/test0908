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
////	const int num = 4;   //const-常属性   此时的num为const修饰的常属性；
////	printf("%d\n", num);
////	//num = 8;          //加const之后 num无法改变；
////	//printf("%d\n", num); 
//	//int arr[10] = { 0 };   //arr-创建数组
//	//const int n = 10;      //const可以将n变成常属性，但仍然是变量。
//	//int arr[10] = { 0 };   //当arr[n]则不通过，因为n为常变量。
//	int arr[MAX] = { 0 };   //当MAX为define定义，则为标识符常量。
//	return 0;
//}


////枚举常量
//enum Sex    //枚举关键enum
//{
//    male,    //后面是 ， （逗号），不是分号
//    female,
//    secret         //male,female,secret为枚举常量
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
//"";            字符串：由“”引起的字符叫做字符串。“”；  空字符串

//int main()
//{
//	char arr1[] = "abcd";    //数组存储字符串char arr2[] = { 'a','b','c','d' ,0};  
//	char arr2[] = { 'a','b','c','d','\0'};    //若无0或者“\0”，会出现乱码。 “\0”是字符串的结束标志
//	printf("%s\n", arr1);  //字符串打印使用“%s”
//	printf("%s\n", arr2);  
//	printf("%d\n", strlen(arr1));     //strlen-string length --计算字符串长度
//	printf("%d\n", strlen(arr2));
//	printf("abc\ndef\nopq\n");     //\n -- 转义字符。   \t -- 水平制表符
//	//转移字符有很多。 \n 换行。\t 横向跳格（跳到下一制表位置）。\v 竖向跳格。\b 退格。\r 回车。\f 走纸换页。\\ 反斜杠字符’\’。\’ 单引号字符。\a 鸣玲。\ddd 1到3位八进制数所代表的字符。\xhh 1到2位十六进制数所代表的字符。
//	printf("abc\\n");     //\\n -- 双斜杠：转义 \ 的转义字符
//	return 0;
//}

//ASCII编码


//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));  // \32是八进制代表的十进制数字， 作为ASCII码值，代表的字符
//	printf("c:\test\32\test.c\n");
//	printf("%c\n",'\32');   // \32 8进制  \x32  16进制
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("师父你要学习嘛？\n 请选择“1/0”：");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("师父牛逼！！！\n");
//	else
//		printf("臭狗屎！！！\n");
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf( " %d\n 臭狗屎第", line );
//		line++;
//	}
//	if (line = 20000)
//		printf("最后一个臭狗屎\n");
//	return 0;
//}

//int ADD(int x, int y)    //定义函数 ADD   c语言中函数分为库函数和自定义函数。
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
    //操作符 
	// 移（二进制）位操作符
    //<<左移   >>右移  
	int a = 1;
	int b = a << 2;
	printf("%d\n", a);
	printf("%d\n", b);   //b为a的二进制中的1移动两位   a=00000...001=1   b=00000...100=4
	//（2进制）位操作
	// & 按位与
	// | 按位或
	// ^ 按位异或   异或的计算规则： 对应的二进制位相同则为0；对应的二进制位相异则为1；
	int c = 3;
	int d = 5;
	int e = c | d;
	printf("%d\n", e);
	//赋值操作符
	// = 赋值； == 判断相等 ； += ；-= ；/= ；^= ；<<= ； >>=  复合赋值符
	//a = a+10 与 a += 10 完全相等

	//单目操作符  “! 逻辑反操作，如 !a” “- 负值” “+ 正值” “& 取地址” “sizeof 计算变量/类型所占空间的大小，单位是字节”
	int f = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a);
	printf("%d\n", sizeof(int));
	//双目操作符   例如 a + b
	//三目操作符
	return 0;
}

