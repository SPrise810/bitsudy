#define _CRT_SEUCRE_NO_WARNINGS 1
#include<stdio.h>
//
// 
// 
// �н���Ϊ������
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
// ������
// 
// 
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	//ָ������������Ԫ�أ�Ԫ������Ϊchar* ����
//	//���Ƿֱ�ÿ���ַ��������ַ��ĵ�ַ����ָ��
//	char** pa = a;
//	//���ǽ������� a�������ָ�� pa
//	pa++;
//	//ָ��ָ������һ��Ԫ�صĵ�ַ���
//	//��ӡ�ľ���at��
//	printf("%s\n", *pa);
//	return 0;
//}
// 
// 
// 
// 
//�ڰ��� 
// 
// 
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	//��++  -- Ȼ��*  ���+3
	printf("%s\n", *cpp[-2]+3);
	//�н���һ����**��cpp-2)-->c+3�ĵ�ַ��"FIRST"Ȼ��� 3 
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