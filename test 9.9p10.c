//˳��ṹ
//ѡ��ṹ
//ѭ���ṹ

#include <stdio.h>

//��֧��䣨ѡ��ṹ����


//int main()
//{
//	int a = 0;    //;  �ֺŴ���������
//	;     //����һ���ֺ�Ҳ��һ����䣬�����
//	return 0;
//}

//if (���ʽ)
//    ���1
//else if(���ʽ2)
//    ���2
//else�����ʽ3��
//    ���3

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ����\n");
//	else if (18 <= age && age<= 40)    //(18<=age<40)�ǲ��Ե� ��ʱ�ó����ִ��˳��Ϊ�� ��age=10ʱ�� 18<=10Ϊ�ټ�Ϊ0���� 18<=10<40 ��ͬ�� 0<40�������
//		printf("����\n");
//	else if (41 <= age && age<= 65)
//		printf("����\n");
//	else
//		printf("����\n");
//	return 0;
//}



//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)                             //if���Ķ���д��
//		printf("δ����\n");
//	else    
//  //else�����һ��{}��Ϊһ�������         //if������else�����������䣬������{}
//	{
//		if (18 <= age && age <= 40)  
//			printf("����\n");
//		else if (41 <= age && age <= 65)
//			printf("����\n");
//		else
//			printf("����\n");
//	}
//	return 0;


//else�Ǻ�����������δƥ���ifƥ��
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
//		printf("haha\n");             //����{}����Ϊhaha������{}���ţ������Ϊ�գ���Ϊ��ʱelse���if��b==2��ƥ�䡣
//	return 0;
//}



//int main()
//{
//	int age = 0;
//	int b = 0;
//	scanf("%d", &age);
//	b= (age < 18 ? printf("δ����"):(18 <= age && age <= 40? printf("����") :printf("������")));
//	return 0;
//}


//if��д��ʽ�ĶԱ�  ��һ��
//if (condition)             //������������x����������������y��
//{
//    return x;
//}
//return y;    


//�ڶ���
//if (condition)             //������������x����������������y��
//{
//    return x;
//}
//else 
//{
//    return y;
//}


//������  ע�⣺
//int main()
//{
//    int num = 4;
//    if (num = 5);    //һ��=�����Ǹ�ֵ�Ⱥţ������ȺŲ��ǱȽϵ���˼
//    {
//        printf("�Ǻ�\n");
//    }
//    return 0;
//}
//���ĸ�  ����д����
//int main()
//{
//    int num = 4;
//    if (5 == num );              //�������ڵȺŵ���ߣ�Ч������ã������׳���
//    {
//        printf("�Ǻ�\n");
//    }
//    return 0;
//}


//�ж�һ�����Ƿ�Ϊ����
//���1-100֮�����е�����
//int main()
//{
//	int a = 0;
//	int i = 1;
//	while (i <= 100)
//	{ 
//		if (1 == i % 2)             //����if(i%2 !=0)        
//			printf("%d ", i);
//		i++;
//	}
//
//	//����2��
//	//while (i <= 100)
//	//{     
//	//	printf("%d ", i);
//	//	i+=2;
//	//}
//
//	scanf("%d", &a);
//	if (0 == a % 2)
//		printf("ż��\n");
//	else
//		printf("����\n");
//
//
//	return 0;
//}


//switch��ר������ʵ�����ֶ��֧��
//switch (���ͱ��ʽ)
//{
//	����
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n"); 
//		break;                    //break��������switchѭ��
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:                        //default ����Ҫ��������˳�򣬱������������е�case����ƥ��
//		printf("�������\n");
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
//		switch (n)                  //switch����Ƕ��ʹ��
//		{
//		case 1:                    //Ƕ�׵�switch��nΪ��ڣ���ʱ  n=2����˴� case 2��ʼִ��    ��case1��ִ�У�
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




//ѭ����䣺
// while 
// for
// do while

//while(���ʽ)
//      ѭ����䣻


//int main()
//{
//	int i = 0;
//	while (i<=10)
//	{
//		//if (5 == i)
//			//break;        //����������ֹѭ��
//		if (5 == i)
//			continue;       //��continueʱ����������while�ĵط���
//		//continue�˴����������жϳ�����֮���ڷ���while�����ж��Ƿ���Ҫ����ִ��
//      //continue������ֹ����ѭ��
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
//			continue;         //��������֮�ϸ�������һ��5
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