//Girilen bir say�n�n ka� kere 2�ye tam b�l�nd���n� bulan bir program yaz�n�z.

#include<stdio.h>
int main()
{
	int number;
	int counter=0;
	
	printf("Enter a number");
	scanf("%d",&number);
	
	while(1<number && number%2==0)
	{
		if(number%2==0)
			counter++;
			
		number /= 2;
	}	
	
	printf("%d",counter);

}
