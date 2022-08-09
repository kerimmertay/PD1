#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int ogr_no;
	int vize;
	int final;
	int sonuc;
	
	printf("ogrencinin numarasini gir:");
	scanf("%d",&ogr_no);
	
	printf("ogrencinin vize notunu giriniz:");
	scanf("%d",&vize);
	
	printf("ogrencinin final notunu giriniz:");
	scanf("%d",&final);
	
	sonuc=vize*0.4+final*0.6;
	
	printf("ogrencinin sonucu= %d",sonuc);
	
	
	
	return 0;
}
