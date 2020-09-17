//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//void fun(int n)
//{
//	if (n < 1)
//	{
//		printf("%d不是2的k次方\n", n);
//		return;
//	}
//	int i = 1;
//	while (i <= n)
//	{
//		if (i == n)
//		{
//			printf("%d是2的k次方\n", n);
//			return;
//		}
//		i <<= 1;
//	}
//	printf("%d不是2的k次方\n", n);
//	return;
//}
//int main()
//{
//	fun(8);
//	fun(64);
//	fun(17);
//	fun(99);
//	fun(1024);
//	return EXIT_SUCCESS;
//}
//
//
//
//
////#define N 3
////#define Y(n) ((N+1)*n)
////int main()
////{
////	//int z = 2 * (N + Y(5 + 1));
////	//printf("%d\n", z);
////
////
////	//int i = 6;
////	//if (i <= 6)
////	//	printf("hello\n");
////	//else
////	//	printf("bbb\n");
////
////
////	//char ch = -1;
////	//printf("%d\n", ch);
////
////
////	//double ret = (double)(10 / 4 * 4);
////	//printf("%lf", ret);
////
////
////	//int a;
////	//int b;
////	//printf("%d\n", (a = 2, b = 5, a++, b++, a + b));
////
////
////	int i, x, y;
////	i = x = y = 0;
////	do {
////		++i;
////		if (i % 2)
////		{
////			x += i;
////		}
////		++i;
////		y += i++;
////	} while (i <= 7);
////	printf("%d %d %d\n", i, x, y);
////
////	return EXIT_SUCCESS;
////}
