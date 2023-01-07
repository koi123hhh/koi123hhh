#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
///*
//int main()
//{
//	char arr1[] = "abc";
//	//"字符串"abc""中有一个默认结束符'/0'=0
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//*/
//求两个数的最大值
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	//条件操作符 表达式1? 表达式2:表达式3
//	printf(num1 > num2 ? num1 : num2);
//
//	/*if (num1 > num2)
//		printf("较大值%d\n", num1);
//	else
//		printf("较大值%\d\n", num2);*/
//	return 0;
//}
//运用函数来解决问题
//MAX(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max=MAX(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}
//
//++ --的使用
//int main()
//{
//	int a = 10;
//	//int b = ++a;//a=11,b=11
//	int b = a++;//a=11,b=10
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
////逻辑操作符
////&&与,||或
//static静态局部变量修饰局部变量延长局部变量的生命周期
//局部变量的值在进行调用完成后就被销毁
//static修饰全局变量时当你在其他的文件中定义了一个函数extern声明是外部函数或者是外部的局部变量
//时如果不使用static时能访问到,当使用static定义该函数时,该函数只能在该文件内部进行使用,出了该文件无法访问到.
//static修饰函数时,改变了函数的连接属性(一个函数声明一下既可以在外部文件进行使用,用~进行修饰后链接属性发生改变),--作用域
//void Test()
//{
//	 static int a = 1;//a被保存下来了
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		Test();
//		i++;
//	}
//	return 0;
//}
//#define定义的标识符常量
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("a=%d\n", a);
//	return 0;
//}
//#define定义宏--和函数的使用较为相像,但是比函数更加简洁
//1.函数的形式
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////2.#define定义宏
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	int max1 = MAX(a, b);
//	printf("max1=%d\n", max1);
//	return 0;
//}
//结构体-描述复杂对象 struct结构体关键字
//创造一个结构体类型
//struct Book
//{
//	char name[20];
//	int price;
//};//注意大括号后面要加上分号,表示结构体的结束
//int main()
//{
//	//调用结构体关键字
//	struct Book b1 = { "c语言程序设计", 55 };
//	//b1的指针类型 struct Book*
//	struct Book*pb = &b1;
//	//用指针打印出书名和价格
//	//1.(.结构体变量.成员)
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//	//2.(->结构体指针->成员)
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//printf("书名:%s\n", b1.name);
//	//printf("价格:%d元\n", b1.price);
//	return 0;
//}
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}
//如果if或else后面有多条语句要执行时,使用{}将其括起来组成一个代码块进行使用
//if(语句一)
//{
//要执行的语句块
//}
//else
//{
//要执行的语句快
//}
//一定要特别注意=赋值,==相等
//判断是否相等时,尽量将常量放在前面,变量放在后面
//判断一个数是否为奇数
//打印1~100之间的奇数
//int main()
//{
//	int i = 1;
//	//1.
//	/*while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}*/
//	//2.
//	/*while (i <= 100)
//	{
//		printf("%d  ", i);
//		i += 2;
//	}*/
//	return 0;
//}
//switch循环语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//		//使用switch语句时一定要特别注意switch后面一定要是一个整型表达式
//		//且一定要注意break的使用,要成良好习惯最后一个表达式后面也要加上break
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
//		//default的用法用于检测用户不合理的输入
//	default:
//		printf("输入错误\n");
//		break;
//		//default语句可以用在switch前后都可以用于检测异常;
//	}
//	return 0;
//}
//循环语句
//注意悬空else的用法
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a==1)
//		if (b == 2)
//			printf("haha\n");
//	else
//		printf("hehe\n");
//
//	return 0;
//}
//该代码啥也不进行打印悬空else讲究就近原则与其最近的且未匹配的if进行匹配
//1.6分值与循环2
//getchar 和putchar 的用法
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//注意与python的区别这里用圆括号代替了;
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//getchar 的实际运用
/*int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);//因为缓冲区还有一个\n被读取要解决这个问题只需要在后面再加上一个getchar()对\n进行读取
	getchar();
	//还有的瑕疵是当你输入enter后又输入了一堆数而getchar()只接受了\n后面的数又被ret=getchar接收了结果还是确认失败
	//可以用一个循环来执行该程序
	while((ch=getchar())!='\n')//上面要声明一下变量ch
	{
		;
	}
	printf("请确认(Y/N)");
	ret = getchar();//在运行过程中直接跳过这一步因为在输出密码后按了一个enter键被getchar读取,赋值给了ret直接输出确认失败;
	if (ret == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}
	return 0;
}*/

//for循环 初始化 判断循环三合一
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//***循环进行几次
/*int main()
{
	int i = 0;
	int y = 0;
	for (i = 0, y = 0; y = 0; i++, y++)
		y++;
	return 0;
}*/
//正确答案该循环进行零次判断条件为赋值语句且赋值为0条件为假循环0次,若赋值为非零元素,该循环为死循环.
//do ....while循环
//打印1~10
int main()
{
int i = 0;
do
{
		printf("%d\n", i);
		i++;
} 
while (i <= 10);
	return 0;
}










