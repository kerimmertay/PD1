#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
		int rastgele; 
	rastgele=1000+rand()%1000;
	
if(rastgele%2==0)
	printf("%d",rastgele);
	else {
	
	printf("%d",rastgele);
	printf("cift degil");
}
return 0;


}