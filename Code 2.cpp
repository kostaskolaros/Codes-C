//1 ile 10000 aras�nda bir say� giriliyor. Girilen bir tam say�n�n ka� basamakl� oldu�unu ekrana yazan C program�n� yaz�n�z.

#include<stdio.h>
int main()
{
	int number;
	int digit=0;
	
	printf("Enter a number");
	scanf("%d",&number);
	
	
	
	while(0<number)
	{
		number /=10;
		digit++;
	
		
	}
	printf("%d",digit);
	
}

