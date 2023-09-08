#include <stdio.h>  //stdio = standard input output

int main()
{
	extern int g_val;  //全局变量的含义是在整个项目中均可以使用，不过需要进行声明。声明时候使用 “extern”（声明外部符号）
	printf("test2 = %d\n", g_val);
	return 0;
}


//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);  //此处可以使用
//	}
//	//printf("%d\n", a); //此处不可使用了
//	return 0;
//}