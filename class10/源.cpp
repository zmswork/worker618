//#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
//#define _CRT_SECURE_NO_WARNINGS 1
//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int Fun()
//{
//	static int count = 1;
//	return ++count;
//}
//
//int my_strlen(char* str)
//{
//	// 递归
//	//if (*str != '\0')
//	    //return 1 + my_strlen(str + 1);
//	//return 0;
//
//	//指针+-运算
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	/*struct Book b = { "王八犊子","1010",50};
//	struct Book* pb = &b;
//	//printf("书名:%s",pb->name);*/
//
//	//char a = 3;   
//	// 00000011
//	//char b = 127; 
//	// 01111111
//	//char c = a + b;
//	//char d = 1;
//
//	/*float f = 3.14;
//	int e = f;
//	printf("%d\n", e);*/
//
//	/*int aa = 1, bb = 2, cc = 2, dd = 2, ee = 1, ff = 2;
//	int sum = aa * bb + cc * dd + ee * ff;
//	printf("%d\n",cc+--cc);*/
//
//	/*int answer;
//	answer = Fun() - Fun() * Fun();
//	printf("%d\n", answer);
//
//	int i = 1;
//	i = (++i) + (++i) + (++i);
//	printf("%d\n", i);
//
//	unsigned int num = -1;
//	printf("无符号%u\n", num);*/
//
//	/*int day = 0;
//	scanf_s("%d\n", &day);*/
//
//	/*int a[5] = {0};
//	printf("%p\n %p\n",&a,&a+1);
//
//	char acX[] = "abcdef";
//	char acY[] = { 'a','b','c','d','e','f'};
//	printf("sizeof:%d,strlen:%d\n", sizeof(acX),strlen(acX));
//	printf("sizeof:%d,strlen:%d\n", sizeof(acY),strlen(acY));
//
//	char b = 0;
//	printf("%c", b);*/
//	
//	/*
//	int arr[10] = {0};
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d\n", arr[i]);
//	}*/
//
//
//	int a[10] = { 0 };
//	int* p = a;
//	printf("%p\n", p);
//	printf("%p\n", &a + 1);
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	// *(p+1) <==> *(a+1) <==> 1[arr] <==> p[1]
//	printf("%d\n", *(arr + 1) == 1[arr]);
//
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	int j = 0;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++) 
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j; 
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int*  p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test2()
//{
//	//代码2
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int* const p = &n;
//	*p = 20; //ok?
//	p = &m;  //ok?
//}
//int main()
//{
//	//测试无cosnt的
//	test1();
//	//测试const放在*的左边
//	test2();
//	//测试const放在*的右边
//	test3();
//	return 0;
//}


struct Book
{
	char Name[20];
	int Price;
};

//int main()
//{
//	struct Book b1 = { "程序设计",50 };
//	struct Book* pb = &b1;
//	*pb = { "C语言",80 };
//	printf("%s %d\n", pb->Name, pb->Price);
//	return 0;
//}