#include <stdio.h>


main() 
{
	int mas[7];
	int mass[100];
	int n=0;
	
for(int i=0;i<7;i++)
{
	scanf("%i", &mas[i]);
}
	
	for(int i=0;i<7;i++)
{
	printf("%4i\n", mas[i]);
}
	
	while((n < 1) || (n > 100))
{
	
	printf("kolitchestvo elementov ot 1 do 100 ");
	scanf("%i", &n);
}
	
	
	for(int i=0;i<n;i++)
	{
		scanf("%i", &mass[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%4i", mass[i]);
	}
}
