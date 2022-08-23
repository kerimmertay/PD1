#include<stdio.h>


int main(){
	
	 int sayi;
	 
	 
	 printf("sicaklik derecesini giriniz:");
	 scanf("%d",&sayi);
	 
	 if(sayi<0){
	 	printf("sicaklik donma noktasinin altinda");
	 	
	 }
	 else if (sayi==0)
	 printf("sicaklik donma noktasinda ");
	 
	 else
	  printf("sicaklik donma noktasinin ustunde ");
	
	return 0;
}


