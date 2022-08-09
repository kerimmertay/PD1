#include<stdio.h>

int main (void)
{

int sayi;

printf("Lutfen bir sayi giriniz..:");
scanf("%d",&sayi);

if(sayi==0)

	printf("girilen sayi = 0 ");
 
else if (sayi>0)

	printf("girilen sayi pozitif");

else 

	printf("girilen sayi negatif");
	
return 0;

}	
