//#include <stdio.h>
//#include <stdlib.h>
////#include <string.h>
//
//
//void fun(char *str)
//{
//	int flag = 0;	//代表没开始处理空格
//	int p = 0;
//	int i = 0;
//	while (str[i]) {
//		//遇到空格 还没开始处理
//		if (!flag && str[i] == ' ') 
//		{
//			i++;
//		}
//		//遇到不是空格 还没开始处理
//		else if (!flag && str[i] != ' ') 
//		{
//			flag = 1;
//			str[p++] = str[i++];
//		}
//		//遇到空格 开始处理了
//		else if (flag && str[i] == ' ') 
//		{
//			flag = 0;
//			str[p++] = str[i++];
//		}
//		//遇到不是空格 开始处理了
//		else //if(flag && str[i] != ' ')
//		{
//			flag = 1;
//			str[p++] = str[i++];
//		}
//	}
//	if (str[p - 1] == ' ') 
//	{
//		str[p - 1] = '\0';
//	}
//	else
//	{
//		str[p] = '\0';
//	}
//}
//int main()
//{
//	char a[100] = "     as    adap     ";
//	fun(a);
//	puts(a);
//	return EXIT_SUCCESS;
//}
////int fun(int x)
////{
////	int c = 0;
////	while (x)
////	{
////		c++;
////		x = x & (x - 1);
////	}
////	return c;
////}
////int func(int a)
////{
////	int b = 0;
////	static int c = 3;
////	a = c++, b++;
////	return (a);
////}
////int main()
////{
//////	char x[] = "China";
////
////
////	//char str1[8] = { 'g','o','o','d','!' };
////	//char str2[5] = "good!";
////	//char* str3 = "good!";
////	//char str4[5] = { 'g','o','o','d','!' };
////	//printf("%s\n", str1);
////	//printf("%s\n", str2);
////	//printf("%s\n", str3);
////	//printf("%s\n", str4);
////
////	//char x[] = "abcd";
////	//char y[] = { 'a','b','c','d' };
////	//int x1 = strlen(x);
////	//int y1 = strlen(y);
////	//printf("%d,%d\n", x1, y1);
////
////
//////	printf("%d\n", fun(2019));
////
////
////	//int a = 2, i, k;
////	//for (i = 0; i < 2; i++)
////	//{
////	//	k = func(a++);
////	//}
////	//printf("%d\n", k);
////
////
////	int s = 0, n;
////	for (n = 0; n < 4; n++)
////	{
////		switch (n)
////		{
////		default:s += 4;
////		case 1:s += 1;
////		case 2:s += 2;
////		case 3:s += 3;
////		}
////	}
////	printf("%d\n", s);
////
////	return EXIT_SUCCESS;
////}