#include <stdio.h>

/****************************************************************************************************
* Funktionen subtract som h�mtar tv� flyttal och retunerar f�rsta talet minus det andra talet
****************************************************************************************************/
double subtract(double a, double b)
{
	return a - b;				// Retunerar a - b
}


/****************************************************************************************************
* Main funktionen d�r vi deklarerar tre variablar samt h�mtar ett returv�rde fr�n funktionen subtract
****************************************************************************************************/
void main(void)
{
	double a = 3.4;							//Deklarerar variabeln a och tilldelar den v�rdet 3.4
	double b = 6.8;							//Deklarerar variabeln b och tilldelar den v�rdet 6.8
	double c = subtract(a, b);				//Deklarerar variabeln c och kallar p� funktionen subract som retunerar v�rdet av a - b

	printf("%lg - %lg = %lg\n", a, b, c);	//Printar ut a - b = c


	return;
}