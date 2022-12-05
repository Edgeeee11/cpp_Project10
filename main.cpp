#include <stdio.h>


main() 
{
	int mas[7];
	
	for(int i=0;i<7;i++)
	{
		scanf("%i", &mas[i]);
	}
	
	for(int i=0;i<7;i++)
	{
		printf("%2i\n", mas[i]);
	}
	
	int n;
	int a;
	
	printf("vvedite razmer massiva");
	scanf("%i", &a);
	
	int mass[a];
	
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

