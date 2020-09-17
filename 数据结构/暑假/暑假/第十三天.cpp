//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* deleteStr(char* s1, char* s2)
//{
//	int length = strlen(s2);
//	int hash_table[256] = { 0 };
//	char* p = s1;
//	int index = 0;
//	for (int i = 0; i < length; i++)
//	{
//		hash_table[(int)s2[i]] = 1;
//	}
//	while (*p != '\0')
//	{
//		if (0 == hash_table[(int)*p])
//		{
//			s1[index++] = *p;
//		}
//		p++;
//	}
//	s1[index] = '\0';
//	return s1;
//}
//int main()
//{
//	char str1[] = "They are students.";
//	char str2[] = "aeiou";
//	char* ret = deleteStr(str1, str2);
//	printf("%s\n", ret);
//	return EXIT_SUCCESS;
//}
//
//
////int f(int n)
////{
////	static int i = 1;
////	if (n >= 5)
////	{
////		return n;
////	}
////	n = n + i;
////	i++;
////	return f(n);
////}
////int fun()
////{
////	int i, j, k = 0;
////	for (i = 0, j = -1; j = 0; i++, j++)
////	{
////		k++;
////	}
////	return k;
////}
////int main()
////{
////	//int a[10] = { 1,2,3,4,5,6,7,8,9 };
////	//int* p = a;
////	//printf("%d\n", *a);
////	//printf("%d\n", *p);
////	//printf("%d\n", a);
////	//printf("%d\n", a[p - a]);
////
////
////	//int a[] = { 0,2,4,6,8,10 };
////	//int* p = a + 1;
////	//printf("%d\n", *(--p));
////
////
////	//int a[] = { 1,3,5 };
////	//int* p = a + 1;
////	//printf("%d\n", *++p);
////
//////#define M(X,Y) (X*Y)
//////	int i = 5;
//////	i = M(i, i + 1) - 7;
//////	printf("%d\n", i);
////
////
//////#define sum(a,b,c) a+b+c
//////	int i = 3;
//////	int j = 2;
//////	printf("%d\n", i * sum(i, (i + j), j));
////
////
//////	printf("%d\n", f(1));
////	printf("%d\n", fun());
////
////
////	return EXIT_SUCCESS;
////}