#define _CRT_SEUCRE_NO_WARNINGS 1
#include<stdio.h>
//
// 
// 
// 承接上为第六题
// 
// 
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d  %d", *(ptr1 - 1), *(ptr2 - 1));
//	//10 5
//	return 0;
//}
//
// 
// 
// 第七题
// 
// 
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	//指针数组有三个元素，元素类型为char* 类型
//	//我们分别将每个字符串的首字符的地址存入指针
//	char** pa = a;
//	//我们将数组名 a存入二级指针 pa
//	pa++;
//	//指针指向了下一个元素的地址了喔
//	//打印的就是at了
//	printf("%s\n", *pa);
//	return 0;
//}
// 
// 
// 
// 
//第八题 
// 
// 
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	//先++  -- 然后*  最后+3
	printf("%s\n", *cpp[-2]+3);
	//承接上一步，**（cpp-2)-->c+3的地址，"FIRST"然后加 3 
	printf("%s\n", cpp[-1][-1]+1);
	//*(*(CPP-1)-1)+1
	return 0;
}
// 
// 
// 
// 
// 
//  
//