#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//DAY_05
//
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
//思路：
//ASCII 'A' -> 65   'a'-> 97      ch + 32 
//一直接受键盘字符：循环：while  for   do...while 
//输入输出字符：etchar   scanf     putchar   printf
//int getchar()  返回int型   putchar(int)
//EOF：文档结束标记 Ctrl + Z
//实现：
//int main()
//{
//	char input;
//	while ((input = getchar()) != EOF)//定义在stdio中
//	{  
//		if (input >= 'A' && input <= 'Z')//判断是不是大写字符
//		{
//			putchar(input + 32);
//			putchar('\n');
//		}
//		
//		else if (input >= 'a' && input <= 'z')//判断是不是小写
//		{
//			putchar(input - 32);
//			putchar('\n');//单引号
//		}
//		else if (input >= '0' && input <= '9')//字符0到9
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
//1.递归和非递归分别实现求第n个斐波那契数。
//递归特点：自己调自己；要有出口
//斐波那契数特点： f(1) = f(2) = 1
//                 f(n) = f(n - 1) + f(n-2) 保存前面两项，在循环过程中不断更新
//循环：for
//实现1：
//常规
//int fab(int n)
//{
//	int fn1 = 1;//第一项
//	int fn2 = 1;//第二项
//	int ret = 0;//最后结果
//	int i = 0;//循环变量
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	for (i = 3; i <= n; i++)
//	{
//		ret = fn1 + fn2;
//		fn2 = fn1;//先给fn2的值
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
//实现2：
//递归 : fab_r(int n)
//	 1.出口：if(n == 1 || n == 2) return1
//	 2.递归：fab_r(n - 1) + fab(n - 2)
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


//2.编写一个函数实现n^k，使用递归实现











