#include<stdio.h>
void swap(int a,int b)
{
	printf("%d %d\n",&a,&b);
	int temp ;
	temp = a;
	a = b;
	b = temp;
	printf("����swap�������a=%d b=%d\n",a,b);
} 
void Swap(int* p,int* q)
{
	printf("%d %d",p,q);
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	printf("����Swap�������a=%d b=%d\n",*p,*q); 
}
int main()
{
	
	int a = 5 ;
	int b = 7 ;
	int *p = &a;
	int *q = &b;
	printf("%d %d %d %d\n",&a,&b,p,q); 
	printf("��һ�ε�a=%d b=%d\n",a,b);
	swap(a,b);
	printf("�ڶ��ε�a=%d b=%d\n",a,b);
	Swap(p,q);
	printf("�����ε�a=%d b=%d\n",a,b);
	return 0;
}
