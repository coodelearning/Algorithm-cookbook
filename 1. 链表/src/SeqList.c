#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 10
typedef struct SequceList{
	int element[MAXSIZE];
	int length;
}SqList;
/*�ṹ�嶨�巽ʽ�� 
1��SqList L;-->L.element[] , L.length
2��SqList *L; -->L->element[] , L->lenght
*/

/*��ȡԪ��*/
//����һ �� 
/*
int GetElement(SqList L,int index){
    return L.element[index-1];
}
*/

//��������(�Ƽ�)
int GetElement(SqList L,int index,int *e){
	if(L.length==0 || index<0 || inde>L.length)
	    return -1;
    *e=L.element[index-1];
    return 0;
}



/*����Ԫ��*/
int InsertElement(SqList L,int index,int e){
	int i;
	for(i=index-1;i>index+1;i--){
	    L.element[i+1] = L.element[i];
	}
	L.element[index-1] = e;
	L.length++;
}


/*ɾ��Ԫ��*/
int DeleteElement(){
	
}

 
int main(){
    SqList L;
    int *e; 
    GetElement(L,1,e)
    printf("result:%d",*e);
}
