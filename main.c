#include <stdio.h>

/****************************************************************************************************
* Funktionen subtract som h�mtar tv� flyttal och lagrar differansen av de tv� talen p� adress z
****************************************************************************************************/
void subtract(double a, double b, double* z)
{
	*z = a - b;								//Lagrar differansen med pekare

	return;
}


/****************************************************************************************************
* Main funktionen d�r vi deklarerar tre variablar samt h�mtar ett returv�rde fr�n funktionen subtract
****************************************************************************************************/
void main(void)
{
	double a = 3.4;							//Deklarerar variabeln a och tilldelar den v�rdet 3.4
	double b = 6.8;							//Deklarerar variabeln b och tilldelar den v�rdet 6.8
	double c = 0;                           //Deklarerar variabeln c 

	subtract(a, b, &c);						// Kallar p� funtionen subract genom att skicka variabeln a och b samt adressen till c
					     

	printf("%lg - %lg = %lg\n", a, b, c);	//Printar ut a - b = c


	return;
}