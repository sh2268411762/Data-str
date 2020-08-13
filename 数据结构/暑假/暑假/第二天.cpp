//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <iostream>
//using namespace std;
//
//void replaceSpace(char* s,int length)
//{
//	if (s == NULL)
//	{
//		return;
//	}
//	int space = 0;//记录空格数量
//	int p1, p2, newlength;
//	for (int i = 0; i < strlen(s); i++)
//	{
//		if(s[i] == ' ')
//		{
//			space++;
//		}
//	}
//	newlength = strlen(s) + 2 * space;//新的长度
//	if (newlength > length)//如果s空间小于被替换所需要的长度，则函数返回
//	{
//		return;
//	}
//	//替换，从后往前
//	p2 = newlength;
//	p1 = strlen(s);
//	while (p1 < p2)
//	{
//		if (s[p1] == ' ')
//		{
//			s[p2--] = '0';
//			s[p2--] = '2';
//			s[p2--] = '%';
//			p1--;
//		}
//		else
//		{
//			s[p2--] = s[p1--];
//		}
//	}
//}
//int main()
//{
//	char str[100] = "abc defgx yz";
//	printf("before:%s\n", str);
//	replaceSpace(str,100);
//	printf("after :%s\n", str);
//
//	////1、
//	//printf("0x%x\n", (0x13 & 0x17));
//	//printf("0x%x\n", (0x13 | 0x17));
//	////2、
//	//int a[2][2] = { {1},3,4 };
//	//3、
//	//printf("%d\n", sizeof(A));
//	
//
//	////填空
//	////1、
//	//const char* p = "Hello";
//	//printf("%c\n", *p);
//	////2、
//	//int a = 10;
//	//a += a *= a -= a / 3;
//	//printf("%d\n", a);
//	////3、
//	//int i = 0; 
//	//int count = 0;
//	//while (i < 10)
//	//{
//	//	if (i < 1)
//	//	{
//	//		continue;
//	//	}
//	//	if (i == 5)
//	//	{
//	//		break;
//	//	}
//	//	i++;
//	//}
//	return EXIT_SUCCESS;
//}
//
//typedef struct
//{
//	int a;
//	char b;
//	short c;
//	short d;
//}A;