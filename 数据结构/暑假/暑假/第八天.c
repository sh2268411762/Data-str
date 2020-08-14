//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////: 求数组中元素出现次数超过数组长度一半的数字。如： {1,2,3,2,2,2,5,4,2} 数字 2 为超过数组长度一
////半的数字
//
//void print(int a[], int x)
//{
//	int temp = a[0];
//	for (int i = 0; i < x - 1; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < x - 1; j++)
//		{
//			if (a[j] == a[i])
//			{
//				count++;
//			}
//		}
//		if (count >= x / 2 && temp != a[i])
//		{
//			printf("%d", a[i]);
//			temp = a[i];
//		}
//	}
//	
//}
//int main()
//{
//	int arr[9] = { 1,2,3,2,2,2,5,4,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return EXIT_SUCCESS;
//}
//
//
////int main()
////{
////	//int a = 10;
////	//double b = 3.14;
////	//int ret = 'A' + a + b;
////	//printf("%d\n", ret);//double
////
////	//char acX[] = "abcdefg";
////	//char acY[] = { 'a','b','c','d','e','f','g' };
////	//int s1 = strlen(acX);
////	//int s2 = strlen(acY);
////	//if (s1 > s2)
////	//{
////	//	printf("a");
////	//}
////	//else if (s1 == s2)
////	//{
////	//	printf("b");
////	//}
////	//else
////	//{
////	//	printf("c");
////	//}
////
////
////	//char s[] = "\\123456\123456\t";
////	//printf("%d\n", strlen(s));
////
////
////	//int s = 0, n;
////	//for (n = 0; n < 4; n++)
////	//{
////	//	switch (n)
////	//	{
////	//	default:s += 4;
////	//	case 1:s += 1;
////	//	case 2:s += 2;
////	//	case 3:s += 3;
////	//	}
////	//}
////	//printf("%d\n", s);
////
////
////	//char* s = "blue1";
////	//char s1[] = "blue1";
////	//int ss1 = strlen(s);
////	//int ss2 = strlen(s1);
////	//int ss3 = sizeof(s);
////	//int ss4 = sizeof(s1);
////	//printf("%d,%d,%d,%d\n", ss1, ss2, ss3, ss4);
////	
////
////	//unsigned long ulA = 0x11000000;
////	//printf("%x\n", *(unsigned char*)&ulA);
////	return EXIT_SUCCESS;
////}