#include<stdio.h>


int main(){
	int i=0;
	int n=0;
	int fact=1;
	printf("sayiyi giriniz:");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	fact*=i;
	
	printf("factoriel:%d",fact);


	return 0;
}

