#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//DAY_05
//
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
//˼·��
//ASCII 'A' -> 65   'a'-> 97      ch + 32 
//һֱ���ܼ����ַ���ѭ����while  for   do...while 
//��������ַ���etchar   scanf     putchar   printf
//int getchar()  ����int��   putchar(int)
//EOF���ĵ�������� Ctrl + Z
//ʵ�֣�
//int main()
//{
//	char input;
//	while ((input = getchar()) != EOF)//������stdio��
//	{  
//		if (input >= 'A' && input <= 'Z')//�ж��ǲ��Ǵ�д�ַ�
//		{
//			putchar(input + 32);
//			putchar('\n');
//		}
//		
//		else if (input >= 'a' && input <= 'z')//�ж��ǲ���Сд
//		{
//			putchar(input - 32);
//			putchar('\n');//������
//		}
//		else if (input >= '0' && input <= '9')//�ַ�0��9
//		{
//		}
//	}
//	return 0;
//}
//
//--------------------------------------------------------------------------
//
//day_06
//
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//�ݹ��ص㣺�Լ����Լ���Ҫ�г���
//쳲��������ص㣺 f(1) = f(2) = 1
//                 f(n) = f(n - 1) + f(n-2) ����ǰ�������ѭ�������в��ϸ���
//ѭ����for
//ʵ��1��
//����
//int fab(int n)
//{
//	int fn1 = 1;//��һ��
//	int fn2 = 1;//�ڶ���
//	int ret = 0;//�����
//	int i = 0;//ѭ������
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	for (i = 3; i <= n; i++)
//	{
//		ret = fn1 + fn2;
//		fn2 = fn1;//�ȸ�fn2��ֵ
//      fn1 = ret;
//	}
//	return ret;
//}
//int main()
//{
//	int n;
//	scanf("&d", &n);
//	printf("%d:%d\n", n, fab(n));
//	return 0;
//}
//
//ʵ��2��
//�ݹ� : fab_r(int n)
//	 1.���ڣ�if(n == 1 || n == 2) return1
//	 2.�ݹ飺fab_r(n - 1) + fab(n - 2)
//int fab_r(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return fab_r(n - 1) + fab_r(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("&d", &n);
//	printf("%d:%d\n", n, fab_r(n));
//	system("pause");
//	return 0;
//}


//-----------------------------------------------------------------------


//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��











