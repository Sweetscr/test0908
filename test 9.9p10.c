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

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else if (18 <= age && age<= 40)    //(18<=age<40)是不对的 此时该程序的执行顺序为： 若age=10时； 18<=10为假即为0，即 18<=10<40 等同于 0<40，则成立
//		printf("青年\n");
//	else if (41 <= age && age<= 65)
//		printf("中年\n");
//	else
//		printf("老年\n");
//	return 0;
//}



//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)                             //if语句的多种写法
//		printf("未成年\n");
//	else    
//  //else后面的一个{}即为一个代码块         //if语句或者else后面跟多条语句，可以用{}
//	{
//		if (18 <= age && age <= 40)  
//			printf("青年\n");
//		else if (41 <= age && age <= 65)
//			printf("中年\n");
//		else
//			printf("老年\n");
//	}
//	return 0;


//else是和离它最近你的未匹配的if匹配
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	//{                    
//		if (b == 2)
//			printf("hehe\n");
//	//}
//	else                              
//		printf("haha\n");             //若有{}，则为haha，若无{}括号，则输出为空，因为此时else会和if（b==2）匹配。
//	return 0;
//}



//int main()
//{
//	int age = 0;
//	int b = 0;
//	scanf("%d", &age);
//	b= (age < 18 ? printf("未成年"):(18 <= age && age <= 40? printf("青年") :printf("中老年")));
//	return 0;
//}


//if书写形式的对比  第一个
//if (condition)             //条件成立返回x，条件不成立返回y。
//{
//    return x;
//}
//return y;    


//第二个
//if (condition)             //条件成立返回x，条件不成立返回y。
//{
//    return x;
//}
//else 
//{
//    return y;
//}


//第三个  注意：
//int main()
//{
//    int num = 4;
//    if (num = 5);    //一个=代表是赋值等号，俩个等号才是比较的意思
//    {
//        printf("呵呵\n");
//    }
//    return 0;
//}
//第四个  建议写法：
//int main()
//{
//    int num = 4;
//    if (5 == num );              //常量放在等号的左边，效果会更好（不容易出错）
//    {
//        printf("呵呵\n");
//    }
//    return 0;
//}


//判断一个数是否为奇数
//输出1-100之间所有的奇数
//int main()
//{
//	int a = 0;
//	int i = 1;
//	while (i <= 100)
//	{ 
//		if (1 == i % 2)             //或者if(i%2 !=0)        
//			printf("%d ", i);
//		i++;
//	}
//
//	//方法2：
//	//while (i <= 100)
//	//{     
//	//	printf("%d ", i);
//	//	i+=2;
//	//}
//
//	scanf("%d", &a);
//	if (0 == a % 2)
//		printf("偶数\n");
//	else
//		printf("奇数\n");
//
//
//	return 0;
//}


//switch：专门用来实现这种多分支的
//switch (整型表达式)
//{
//	语句项；
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n"); 
//		break;                    //break用来跳出switch循环
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期七\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:                        //default 不需要在意它的顺序，避免输入与所有的case都不匹配
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)                  //switch允许嵌套使用
//		{
//		case 1:                    //嵌套的switch以n为入口，此时  n=2，因此从 case 2开始执行    （case1不执行）
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d, n=%d\n", m, n);
//	return 0;
//
//}




//循环语句：
// while 
// for
// do while

//while(表达式)
//      循环语句；


//int main()
//{
//	int i = 0;
//	while (i<=10)
//	{
//		//if (5 == i)
//			//break;        //用以永久中止循环
//		if (5 == i)
//			continue;       //当continue时，它会跳到while的地方。
//		//continue此处的作用是判断成立了之后，在返回while用以判断是否需要继续执行
//      //continue用以中止本次循环
//		printf("%d ", i);
//		i+=1;
//	}
//	return;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i += 1;
//		if (5 == i)
//			continue;         //这个程序比之上个，少了一个5
//		printf("%d ", i);
//	}
//	return;
//}


//getchar  putchar
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF) 
	//ctrl+z
	//EOF = end of file -> -1
	{ 
		putchar(ch);
	}
	return 0;
}