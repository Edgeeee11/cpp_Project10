#include <stdio.h>


main() 
{
	int mas[7];
	int n;
	int mass[100];
	
	for(int i=0;i<7;i++)
	{
		scanf("%i", &mas[i]);
	}
	
	for(int i=0;i<7;i++)
	{
		printf("%2i\n", mas[i]);
	}
	
	printf("kolitchestvo elementov");
	scanf("%i", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%i", &mass[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%4i", mass[i]);
	}
}

