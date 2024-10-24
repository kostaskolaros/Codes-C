//1 ile 10000 arasında bir sayı giriliyor. Girilen bir tam sayının kaç basamaklı olduğunu ekrana yazan C programını yazınız.

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

