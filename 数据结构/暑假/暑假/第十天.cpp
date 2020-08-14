//#include <stdio.h>
////在字符串中找出第一个只出现一次的字符。如输入 "abaccdeff" ，则输出 'b' 。要求时间复杂度为 O(n) 
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//void FindChar(string& s)
//{
//	int str[256];
//	for (int i = 0; i < 256; i++)
//	{
//		str[i] = 0;
//	}
//	for (int j = 0; j < s.size(); j++)
//	{
//		str[s[j]]++;
//	}
//	for (int k = 0; k < s.size(); k++)
//	{
//		if (str[s[k]] == 1)
//		{
//			printf("%c", s[k]);
//			return;
//		}
//	}
//	printf("%c", '.');
//}
//int main()
//{
//	string s;
//	cin >> s;
//	FindChar(s);
//	cout << endl;
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
////char* myString()
////{
////	char see[6] = { 0 };
////	char* s = "Hello World!";
////	for (int i = 0; i < sizeof(s) - 1; i++)
////	{
////		see[i] = *(s + i);
////	}
////	return see;
////}
////int main()
////{
////	
////	
//////	char acX[] = "abc";
//////	char acY[] = { 'a','b','c' };
//////	char* szX = "abc";
//////	char* szY = "abc";
////////	szX = "iii";
//////	printf("%p,%p\n", szX, szY);
////////	printf("%s,%s\n", szX, szY);
////
////
////	//char* str[3] = { "stra","strb","strc" };
////	//char* p = str[0];
////	//int i = 0;
////	//while (i < 3)
////	//{
////	//	printf("%s ", p++);
////	//	i++;
////	//}
////
////
//////	int x[] = { 1,2,3,4,5,6 }, * p = x;
//////	printf("%d\n", (p += 2, *p++));
//////	printf("%d\n", (p += 2, *++p));
//////	printf("%d\n", (p += 3, *p));
//////	printf("%d\n", (p += 2, ++*p));
////
////
//////	printf("%s\n", myString());
////
////
////	int i = 1;
////	printf("%d,%d\n", sizeof(i++), i);
////
////	char a[1000];
////	for (i = 0; i < 1000; i++)
////	{
////		a[i] = (char)(-1 - i);
////	}
////	printf("%s\n", a);
////	printf("%d\n", strlen(a));
////	return EXIT_SUCCESS;
////}
////
////
//////void fun(char Str[2])
//////{
//////	printf("%d,%d\n", sizeof(Str), strlen(Str));
//////}
//////union X {
//////	int x;
//////	char y[4];
//////}a;
//////#define X(x,y)  x < y ? x : y
//////int main()
//////{
//////	//char s[] = "Hello";
//////	//fun(s);
//////	//printf("\n%d\n", 1 << 3 + 2);
//////
//////
//////	//X a;
//////	//a.x = 0x11223344;
//////	//printf("0x%x\n", a.y[0]);
//////	//printf("0x%x\n", a.y[1]);
//////	//printf("0x%x\n", a.y[2]);
//////	//printf("0x%x\n", a.y[3]);
//////
//////
//////	//int a, x;
//////	//for (a = 0, x = 0; a <= 1 && !x++; a++)
//////	//{
//////	//	a++;
//////	//}
//////	//printf("%d,%d", a, x);
//////
//////
//////	//int ret = X(73, 5);
//////	//printf("%d\n", ret);
//////
//////
//////	//int a[5] = { 1,2,3,4,5 };
//////	//int* p1 = (int*)(&a + 1);
//////	//int* p2 = (int*)((int)a + 1);
//////	//int* p3 = (int*)(a + 1);
//////	//printf("%d,%d,%d\n", p1[-1], p2[0], p3[1]);
//////	return EXIT_SUCCESS;
//////}