#include <stdio.h>

/********************************************************************************
* Ett program som med hjälp av två funktioner ska tilldela värden och sen printa ut
********************************************************************************/

/*Funktion för att tilldela värden*/
void electrical_set(double* v, double* c, double* r)
{
	*v = 3.4;		//Sätter värdet 3.4 på adressen till voltage	
	*c = 6.8;		//Sätter värdet 6.8 på adressen till current
	*r = *v / *c;	//Sätter värdet på resistance till voltage delat på current

	return;
}



/*En print funktion som printar de olika värderna*/
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

	electrical_set(&voltage, &current, &resistance);	//Kallar på på funktion för att sätta värderna 

	electrical_print(voltage, current, resistance);		//Kallar på funkion för att printa värderna


	return;
}