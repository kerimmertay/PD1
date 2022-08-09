#include<stdio.h>

int main (){
	
	int a;
	int b;
	int x;
	int y;
	
	printf("klavyeden birinci sayiyi giriniz:\n");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz:\n");
	scanf("%d",&b);
	
	x=a ;
	y=b ;
	b=x ;
	a=y ;
	
	
	printf("yeni birinci sayi:  %d ,yeni ikinci sayi :%d ",a,b);
	
	return 0;
}
