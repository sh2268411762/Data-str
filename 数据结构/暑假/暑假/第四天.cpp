//#include <stdio.h>
//#include <stdlib.h>
//int findOne(unsigned int x)
//{
//	int count = 0;
//	while (x != 0)
//	{
//		count += (x & 1);
//		x >>= 1;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int x = 2456588086;//1001 0010 0110 1100 1000 1111 0011 0110       16
////	unsigned int x = 35;
//	int ret = findOne(x);
//	printf("%d\n", ret);
//	return EXIT_SUCCESS;
//}
//
//
////#define F(X,Y) ((X)+(Y))
////enum ABC
////{
////	X1,
////	Y1,
////	Z1=5,
////	A1,
////	B1
//////};
////int fun(int x, int y)
////{
////	static int m = 0;
////	static int i = 2;
////	i += m + 1;
////	m = i + x + y;
////	return m;
////}
////int main()
////{
////	int j = 4, m = 1,k;
////	k = fun(j, m);
////	printf("%d\n", k);
////	k = fun(j, m);
////	printf("%d\n", k);
////
////	//char a[20];
////	//char* p1 = (char*)a;
////	//char* p2 = (char*)(a + 5);
////	//int n = p2 - p1;
////	//printf("%d\n",n);
////
////	//int a = 3;
////	//int b = 4;
////	//printf("%d\n", F(a++, b++));
////
////
////	//int x;
////	//x = 5 > 2 + 1 && 2 || 2 * 4 < 4 - !0;
////	//printf("%d\n", x);
////
////	//int i = 1,sum = 0;
////	//while (i < 10){
////	//	sum = sum + 1;
////	//	i++;
////	//}
////	//printf("i=%d,sum=%d", i, sum);
////
////
//////#pragma pack(4)
//////	struct ts1
//////	{
//////		short a;
//////		char b;
//////		long c;
//////		long d;
//////
//////	};
//////	struct ts2
//////	{
//////		long d;
//////		short a;
//////		char b;
//////		long c;
//////	};
//////	struct ts3
//////	{
//////		short a;
//////		long c;
//////		char b;
//////		long d;
//////	};
//////	struct ts1 s1;
//////	struct ts2 s2;
//////	struct ts3 s3;
//////	printf("%d,%d,%d\n", sizeof(s1), sizeof(s2), sizeof(s3));
//////	printf("%d,%d,%d\n", sizeof(ts1), sizeof(ts2), sizeof(ts3));
//////#pragma pack()
////
////
////	//enum ABC a = Y1;
////	//enum ABC b = B1;
////	//printf("%d,%d\n", a, b);
////	return EXIT_SUCCESS;
////}