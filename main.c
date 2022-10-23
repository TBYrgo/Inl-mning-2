#include <stdio.h>

/******************************************************************************************
* Ett program som sorterar och skriver ut i f�rst fallande ordning och sedan stigande
******************************************************************************************/
int main(void)
{
    double data[] = { 7, 0.5, 2, 0.3, 0.1, 0.0, -10, 528.2, 8.0, 7.2, 2.3, 1100, 222 }; //Skapar samt tilldelar arrayen data sina v�rden
    double minne = 0;                               //Skapar en variabel som anv�nds som minne

    int length = sizeof(data) / sizeof(data[0]);    //R�knar ut l�ngden p� arrayen data


/*Tv� for loopar som sorterar arrayen i fallande ordning*/
    for (int i = 0; i < length; i++) 
    {
        for (int j = i + 1; j < length; j++) 
        {
            if (data[i] < data[j])              //Om talet f�re n�sta tal �r mindre 
            {
                minne = data[i];                //L�gg f�rsta talet p� minnet 
                data[i] = data[j];              //L�gg andra talet p� f�rsta talets plats
                data[j] = minne;                //L�gg f�rsta talet fr�n minnet p� andra talets plats
            }
        }
    }

    /*Printar ut arrayen inneh�ll*/
    printf("Arrayen sorterad i fallande ordning: \n");
    for (int i = 0; i < length; i++) {
        printf("%lg ", data[i]);
    }
   



    /*Tv� for loopar som sorterar arrayen i stigande ordning*/
    for (int i = 0; i < length; i++) 
    {
        for (int j = i + 1; j < length; j++)
        {
            if (data[i] > data[j])              //J�mf�r om f�rsta v�rdet �r st�rre �n n�sta
            {
                minne = data[i];                //L�gger f�rsta v�rdet p� minnet  
                data[i] = data[j];              //Sparar andra v�rdet och l�gger det p� f�rsta v�rdets plats
                data[j] = minne;                //Sparar f�rsta v�rdet p� andra v�rdets plats
            }
        }
    }


    /*Printar ut arrayen inneh�ll*/
    printf("\n\nArrayen sorterad i stigande ordning: \n");
    for (int i = 0; i < length; i++) {
        printf("%lg ", data[i]);
    }
    printf("\n");

	return 0;

}