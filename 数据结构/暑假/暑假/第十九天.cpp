//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void fun(char str[])
//{
//	int strLength = strlen(str);
//	int count = 1;//记录重复个数
//	int i;
//	for (i = 0; i < strLength; i++)
//	{
//		if (str[i + 1] == str[i])
//		{
//			count++;
//		}
//		else
//		{
//			if (count == 1)
//			{
//				printf("%c", str[i]);
//			}
//			else
//			{
//				printf("%d%c", count, str[i]);
//			}
//			count = 1;//重置
//		}
//	}
//}
//int main()
//{
//	char str[99] = "xxxyyyyz";//3x4yz
//	fun(str);
//	return EXIT_SUCCESS;
//}
//
////int main()
////{
////	//int a = 10;
////	//int b = 20;
////	//int* p = &a, * q = &b;
////	//printf("%d,%d\n", *p, *q);
////	//int temp = *p;
////	//*p = *q;
////	//*q = temp;
////	//printf("%d,%d\n", *p, *q);
////
////
////	//int a = 5;
////	//int* p = &a, * q = &a;
////	//a = p - q;
////	//printf("%d\n", a);
////
////
////	//int x = 6, n = 5;
////	//x += n++;
////	//printf("%d,%d\n", x, n);
////
////
////	int x = 4;
////	x += x *= x + x;
////	printf("%d\n", x);
////
////	return EXIT_SUCCESS;
////}