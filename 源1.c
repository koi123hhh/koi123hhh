#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
///*
//int main()
//{
//	char arr1[] = "abc";
//	//"�ַ���"abc""����һ��Ĭ�Ͻ�����'/0'=0
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//*/
//�������������ֵ
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	//���������� ���ʽ1? ���ʽ2:���ʽ3
//	printf(num1 > num2 ? num1 : num2);
//
//	/*if (num1 > num2)
//		printf("�ϴ�ֵ%d\n", num1);
//	else
//		printf("�ϴ�ֵ%\d\n", num2);*/
//	return 0;
//}
//���ú������������
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
//++ --��ʹ��
//int main()
//{
//	int a = 10;
//	//int b = ++a;//a=11,b=11
//	int b = a++;//a=11,b=10
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
////�߼�������
////&&��,||��
//static��̬�ֲ��������ξֲ������ӳ��ֲ���������������
//�ֲ�������ֵ�ڽ��е�����ɺ�ͱ�����
//static����ȫ�ֱ���ʱ�������������ļ��ж�����һ������extern�������ⲿ�����������ⲿ�ľֲ�����
//ʱ�����ʹ��staticʱ�ܷ��ʵ�,��ʹ��static����ú���ʱ,�ú���ֻ���ڸ��ļ��ڲ�����ʹ��,���˸��ļ��޷����ʵ�.
//static���κ���ʱ,�ı��˺�������������(һ����������һ�¼ȿ������ⲿ�ļ�����ʹ��,��~�������κ��������Է����ı�),--������
//void Test()
//{
//	 static int a = 1;//a������������
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
//#define����ı�ʶ������
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("a=%d\n", a);
//	return 0;
//}
//#define�����--�ͺ�����ʹ�ý�Ϊ����,���ǱȺ������Ӽ��
//1.��������ʽ
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////2.#define�����
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
//�ṹ��-�������Ӷ��� struct�ṹ��ؼ���
//����һ���ṹ������
//struct Book
//{
//	char name[20];
//	int price;
//};//ע������ź���Ҫ���Ϸֺ�,��ʾ�ṹ��Ľ���
//int main()
//{
//	//���ýṹ��ؼ���
//	struct Book b1 = { "c���Գ������", 55 };
//	//b1��ָ������ struct Book*
//	struct Book*pb = &b1;
//	//��ָ���ӡ�������ͼ۸�
//	//1.(.�ṹ�����.��Ա)
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//	//2.(->�ṹ��ָ��->��Ա)
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//printf("����:%s\n", b1.name);
//	//printf("�۸�:%dԪ\n", b1.price);
//	return 0;
//}
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//	return 0;
//}
//���if��else�����ж������Ҫִ��ʱ,ʹ��{}�������������һ����������ʹ��
//if(���һ)
//{
//Ҫִ�е�����
//}
//else
//{
//Ҫִ�е�����
//}
//һ��Ҫ�ر�ע��=��ֵ,==���
//�ж��Ƿ����ʱ,��������������ǰ��,�������ں���
//�ж�һ�����Ƿ�Ϊ����
//��ӡ1~100֮�������
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
//switchѭ�����
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//		//ʹ��switch���ʱһ��Ҫ�ر�ע��switch����һ��Ҫ��һ�����ͱ��ʽ
//		//��һ��Ҫע��break��ʹ��,Ҫ������ϰ�����һ�����ʽ����ҲҪ����break
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
//		//default���÷����ڼ���û������������
//	default:
//		printf("�������\n");
//		break;
//		//default����������switchǰ�󶼿������ڼ���쳣;
//	}
//	return 0;
//}
//ѭ�����
//ע������else���÷�
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
//�ô���ɶҲ�����д�ӡ����else�����ͽ�ԭ�������������δƥ���if����ƥ��
//1.6��ֵ��ѭ��2
//getchar ��putchar ���÷�
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//ע����python������������Բ���Ŵ�����;
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//getchar ��ʵ������
/*int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);//��Ϊ����������һ��\n����ȡҪ����������ֻ��Ҫ�ں����ټ���һ��getchar()��\n���ж�ȡ
	getchar();
	//���е�覴��ǵ�������enter����������һ������getchar()ֻ������\n��������ֱ�ret=getchar�����˽������ȷ��ʧ��
	//������һ��ѭ����ִ�иó���
	while((ch=getchar())!='\n')//����Ҫ����һ�±���ch
	{
		;
	}
	printf("��ȷ��(Y/N)");
	ret = getchar();//�����й�����ֱ��������һ����Ϊ������������һ��enter����getchar��ȡ,��ֵ����retֱ�����ȷ��ʧ��;
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");
	}
	return 0;
}*/

//forѭ�� ��ʼ�� �ж�ѭ������һ
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//***ѭ�����м���
/*int main()
{
	int i = 0;
	int y = 0;
	for (i = 0, y = 0; y = 0; i++, y++)
		y++;
	return 0;
}*/
//��ȷ�𰸸�ѭ����������ж�����Ϊ��ֵ����Ҹ�ֵΪ0����Ϊ��ѭ��0��,����ֵΪ����Ԫ��,��ѭ��Ϊ��ѭ��.
//do ....whileѭ��
//��ӡ1~10
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










