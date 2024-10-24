//Klavyeden girilen iki sayýnýn en küçük ortak katýný (okek) bulan algoritma tasarlayýnýz.
#include<stdio.h>

int main()
{
	int number;
	int number2;
	int OKEK=0;
	int max=0;
	
	printf("Bir sayi giriniz");
	scanf("%d",&number);
	printf("Bir sayi daha giriniz");
	scanf("%d",&number2);
	
	if(number<number2)
	{
		max=number2;
	}
	else
	{
		max=number;
	}
	
	for(int i=max; i<= number*number2; i++)
	{
		if(i%number==0 && i%number2==0)
		{
			OKEK=i;
			break;
		}
	}
	
	printf("%d",OKEK);
	
	
}
