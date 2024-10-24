//Girilen bir sayýnýn kaç kere 2’ye tam bölündüðünü bulan bir program yazýnýz.

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
