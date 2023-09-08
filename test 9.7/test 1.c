#include <stdio.h>
#include <string.h>


//c语言常见关键字
//auto  局部变量前都有一个auto，不过因为常用，故省略，如int a  其实为 auto int a；
//break      case   char   const    continue   default    do   double   else    enum(枚举)     extern（引入外部符号，其它引到现在这个里面）
//float      for     goto    if   int   long     register（寄存器关键字）     return   short    signed（定义有符号的）
//sizeof   static（静态的）     struct（结构体关键字）   switch    typedef（类型定义）   union（联合体/共用体）  
//unsigned（定义无符号的，即最高位不是表示正负号意思了）      void（无/空）      volatile（体现c语言短位的关键字）     while
//按访问速度排序：寄存器 > 高速缓存 > 内存 > 硬盘
//register： register int a=10;  此时表示建议把a放在寄存器内访问，但是只是建议。实际由编译器决定是否要将a放入寄存器。
//unsigned int num =20;//定义无符号变量 num          typedef unsigned int u_int：把 unsigned int命名为 u_int，以后 u_int num= unsigned int num


//"\0" 字符串结束标志  其ASCII值为 0
//"0" 数字0            其ASCII值为48
//EOF - end of file  --文件结束标志
//strlen 计算字符串的长度，返回的是字符串的长度     sizeof-单目运算符，sizeof（数组）=计算数组大小，单位是字节


//比较数的大小，自写。
//方案 一
//int main()
//{
//	int a = 0;   
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//		printf("较大值是 %d", a);
//	else
//		printf("较大值是 %d", b);
//	return 0;
//}


//方案二：（创建函数）
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//};
//
//int main()
//{
//	int x;
//	int y;
//	int max;
//	scanf("%d %d", &x, &y);
//	max = MAX(x, y);
//	printf("较大值是 %d",max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = {1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));    //计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));   //计算数组元素个数
//	return 0;
//}

// ~ 按位取反

//int main()
//{
//	int a = 0;
//	int b = ~a;
//    //原码、反码、补码
//    //负数在内存中存储的时候，存储的是二进制的补码
//	printf("%d\n", b);   //使用的，打印的是这个数的原码
//	//以此题为例
//	//a =         00000000 00000000 00000000 00000000
//	//b = ~a =    11111111 11111111 11111111 11111111   //补码：补码=反码+1
//	//补码变反码= 11111111 11111111 11111111 11111110   //反码：补码减 1 得到反码
//	//反码变原码= 10000000 00000000 00000000 00000001   //原码：符号位不变，其它位按位取反
//	return 0;
//}


//只要是整数，内存中存储的均为二进制的补码；
//PS:原码：
//原码就是把数转换为2进制
//10的原码是 0000 1010，最高位的0代表这个数是正数（最高位是符号位）
//-10的原码是1000 1010，最高位的1代表这个数是负数（最高位是符号位）
// 
//反码：
//正数的反码和原码相同
//负数的反码在原码的基础上，符号位不变，其余位0变1, 1变0
//10的原码是0000 1010，那它的反码是0000 1010
// -10的原码是1000 1010，那它的反码是111 10101
// 
//补码：
//正数的补码和原码相同
//负数的补码在反码的基础上，最低位加1
//10的原码是0000 1010，那它的补码是00001010
//-10的原码是1000 1010，它的反码是1111 0101，那他的补码是1111 0110



//“--” “++”
//int main()
//{
//	int a = 10;
//	int d = 10;
//	int b = a++;   //后置 ++ ，为先使用，再++，即a=10，赋值b=a=10，之后a再++，即a=11
//	int c = ++d;   //前置 ++ ，为先++，再使用，即a=10，a++后等于11，赋值c=此时a=11
//
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}


//(类型) ：强制转换类型
//int main()
//{
//	int a = (int)3.14;  //3.14为double类型，转换为int类型
//	printf("%d\n", a);  //结果为3
//	return 0;
//}

// >=大于等于  <=小于等于   !=不相等   ==相等


//逻辑操作符
// && ： 逻辑
//int main()
//{
//	//真 -- 非 0
//	//假 -- 0
//	//&& -- 逻辑与
//	//|| -- 逻辑或
//	int a = 3;
//	int b = 5;
//	int c = a && b; //a=3为真，b=5为真，c=1   区别于 & 按位与
//	int d = a & b;
//	printf("%d\n %d", c,d);
//	return 0;
//}


//三目操作符：总共有三个操作数
//int main()
//{
//	int a = 10;
//	int b = 5;
//	int max = 0;
//	max = (a > b ? a : b);   //exp1 ? exp2 : exp3 ;  表达式1？表达式2：表达式3；  exp1表达式为真吗？为真则执行exp2：不然则执行exp3；
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];  //[] -下标引用操作符
//	//int sum = ADD(a, b);  //()  --函数调用操作符   PS：此处ADD需要定义函数。
//
//	return 0;
//
//}

//void test()
//{
//	static int a = 1;    //在没有static时，a输出均为2
//	a++;
//	printf("a = %d\n", a);
//}
////static修饰局部变量时，改变了局部变量的生命周期（变长）
////static修饰全局变量时，改变了全局变量的作用域。只能在自己的源文件内部使用。
//
//int main()
//{
//	int i = 0;
//	while (i < 5)     //while使用时后面没有；
//	{
//		test();
//		i++;
//		printf("i = %d\n", i);
//	}
//	return 0;
//}


//extern int ADD(int, int);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//
//}

//#define MAX 100     //#define定义的标识符常量
//#define MAX(X,Y) (X>Y?X:Y)             //#define定义的宏-带参数


//32位系统
//1GB = 1024 MB    1MB = 1024 KB  1KB = 1024 Byte    1 byte =8 bit
//32位系统  2^32次方个地址，一个地址里面放一个字节，因此  32位系统最大能放的内存是 2^32个字节 = 4194304 KB = 4096 MB = 4GB 

//int main()
//{
//	int a = 10;  //a占用4个字节
//	int* p = &a;   //p是一个指针变量，它的类型是*    *解引用操作符
//	//p是a的地址，*p可以找到a的值
//	//&a 取地址
//	printf("%p\n", &a);  //%p是用来打印地址的   输出结果：000000000000000A 为16进制数字
//	printf("%p\n", p);  //注意书写  &a,p   此时p也有个地址。p地址和&a相同，&p和&a不同
//
//	return 0;
//}

//32位平台上，是4个字节   在64位平台上，是8个字节
//32位平台，例如A: 00000000 00000000 00000000 00001010
//64位平台，例如A: 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00001010


//int main()
//{
//	double d = 3.14;  
//	double* pd = &d;   
//	printf("%lf\n", &d);  
//	printf("%lf\n", pd);    //地址指针在32位系统是4个字节，64位系统是8个字节，
//		return 0;
//}


//结构体  struct
//人  书之类的属于复杂对象
//若想表达一个人，需要一个人的名字、身高、年龄等信息
//若想描述一本书，需要书名、作者、定价、出版商等信息
//若想描述复杂对象，则需要使用结构体
//结构体--我们自己创造出来的一种类型 

struct Book
{
	char name[20];
	short price;
};

int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "三体",55};     //c语言中双引号引出字符串，单引号引出字符
	struct Book* pd = &b1;
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	printf("书名：%s\n", (*pd).name);
	printf("书名：%s\n", pd->name);
	//若想更改书名，不能直接写b1.name=“书名”，而是需要使用 strcpy
	strcpy(b1.name, "黑暗森林法则");
	printf("书名：%s\n", pd->name);
	return 0;
}