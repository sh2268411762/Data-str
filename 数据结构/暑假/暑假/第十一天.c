//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void findFirstRepeat(char* s, int n)
//{
//	char word[10];
//	int i, j;
//	word[0] = *s;
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (*(s + i) == word[j])
//			{
//				printf("%c\n", *(s + i));
//				return;
//			}
//			else
//			{
//				word[i] = *(s + i);
//			}
//		}
//	}
//}
//int main()
//{
//	char* str = "qywyer23tdd";
//	int len = strlen(str);
//	findFirstRepeat(str, len);
//	return EXIT_SUCCESS;
//}
//
//
//
//
//
////int fun(char* s)
////{
////	char* p = s;
////	while (*p != '\0')
////	{
////		p++;
////	}
////	return (p - s);
////}
////int main()
////{
//////	printf("%d\n", fun("goodbye!"));
////
////
////	//unsigned char a = 0xA5;
////	//unsigned char b = ~a >> 4 + 1;
////	//printf("%d\n", b);
////
////
////	const int i = 0;
////	int* j = (int*)&i;
////	*j = 1;
////	printf("%d,%d\n", i, *j);
////
////	return EXIT_SUCCESS;
////}