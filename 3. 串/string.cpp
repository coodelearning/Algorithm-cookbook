#include<stdio.h>
#include<stdlib.h>

/*
�������ƣ�RecursiveStringLength
��    �Σ��ַ�������ͷָ��ch 
��    �Σ��ַ������� 
�� �� ֵ: �ַ������� 
��    �ܣ��ݹ�����ַ�����ȡ������Ϣ*/
int RecursiveStringLength(char *ch)
{
	if(ch[0] == '\0')/*�������ĵ�һ��Ԫ�ؾ��ǽ�����,��ʱֱ�ӷ��س���Ϊ0*/
		return 0;
	else
		return RecursiveStringLength(ch+1)+1; /*ÿ����һ�����������ƶ�һλ,�ҷ���ֵֵ+1,�ݹ麯�����ҵ���������ʱ�Զ�ֹͣ*/
}

int main()
{
	char ch[] = "L love coding";/*�ַ�����,�Զ���'\0'��β*/
	printf("char length is :%d\n",RecursiveStringLength(ch));
	getchar();	
}
