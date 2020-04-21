#include <stdio.h>

 void MinCislo(int x, int y)
 {
	
	if (x < y)
	{
		printf("mensi cislo je: %i", x);
	}
	else
	{
		printf("mensi cislo je: %i", y);
	}
 }

 void main()
 {
	 int x, y;
	 scanf_s("%i", &x);
	 scanf_s("%i", &y);
	 MinCislo(x,y);

 }