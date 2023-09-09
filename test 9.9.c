//顺序结构
//选择结构
//循环结构

#include <stdio.h>

//分支语句（选择结构）：


//int main()
//{
//	int a = 0;    //;  分号代表语句结束
//	;     //仅仅一个分号也是一个语句，空语句
//	return 0;
//}

//if (表达式)
//    语句1
//else if(表达式2)
//    语句2
//else（表达式3）
//    语句3

int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 17)
		printf("未成年\n");
	else if (18 <= age && age<= 40)
		printf("青年\n");
	else if (41 <= age && age<= 65)
		printf("中年\n");
	else
		printf("老年\n");
	return 0;
}