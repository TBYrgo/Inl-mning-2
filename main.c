#include <stdio.h>

/********************************************************************************
* Ett program som med hj�lp av tv� funktioner ska tilldela v�rden och sen printa ut
********************************************************************************/

/*Funktion f�r att tilldela v�rden*/
void electrical_set(double* v, double* c, double* r)
{
	*v = 3.4;		//S�tter v�rdet 3.4 p� adressen till voltage	
	*c = 6.8;		//S�tter v�rdet 6.8 p� adressen till current
	*r = *v / *c;	//S�tter v�rdet p� resistance till voltage delat p� current

	return;
}



/*En print funktion som printar de olika v�rderna*/
void electrical_print(double vo, double cu, double re)
{
	printf("-------------------------------------------------------------------------------------------------------\n\n");
	printf("Voltage: %lg V\nCurrent: %lg mA\nResistance: %lg kOhm\n\n", vo, cu, re);
	printf("-------------------------------------------------------------------------------------------------------");

	return;
}



void main(void)
{

	double voltage = 0;				//Skapar variabel voltage
	double current = 0;				//Skapar variebel current	
	double resistance = 0;			//Skapar variabel resistance 

	electrical_set(&voltage, &current, &resistance);	//Kallar p� p� funktion f�r att s�tta v�rderna 

	electrical_print(voltage, current, resistance);		//Kallar p� funkion f�r att printa v�rderna


	return;
}