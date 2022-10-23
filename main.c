#include <stdio.h>

/****************************************************************************************************
* Funktionen subtract som hämtar två flyttal och lagrar differansen av de två talen på adress z
****************************************************************************************************/
void subtract(double a, double b, double* z)
{
	*z = a - b;								//Lagrar differansen med pekare

	return;
}


/****************************************************************************************************
* Main funktionen där vi deklarerar tre variablar samt hämtar ett returvärde från funktionen subtract
****************************************************************************************************/
void main(void)
{
	double a = 3.4;							//Deklarerar variabeln a och tilldelar den värdet 3.4
	double b = 6.8;							//Deklarerar variabeln b och tilldelar den värdet 6.8
	double c = 0;                           //Deklarerar variabeln c 

	subtract(a, b, &c);						// Kallar på funtionen subract genom att skicka variabeln a och b samt adressen till c
					     

	printf("%lg - %lg = %lg\n", a, b, c);	//Printar ut a - b = c


	return;
}