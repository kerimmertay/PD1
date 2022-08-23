#include<stdio.h>


int main(){
	
	 int a;
	int b;
	int c;
	printf("birinci sayiyi giriniz:");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&b);
	printf("ücüncü sayiyi giriniz:");
	scanf("%d",&c);
	 	
	if(a>b&&a>c)
		printf("birinci sayi en buyuktur:");
	else if(b>a&&b>c)
		printf("ikinci sayi en buyuktur:");
	else 
		printf("ucuncu sayi en buyuktur:");	
	
	return 0;
}



