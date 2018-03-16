#include "glowa.h"

void V(void){

	// incjalizuje kolumny i wiersze MACIERZY A
    int wier1; //i wiersz
    int kol1; //j kolumna
    do{    
    printf("Ile wierszy ma macierz A?");
	cin>>wier1;
	}while(wier1==0);
	do{
	printf("Ile kolumn ma macierz A?");
	cin>>kol1;
	}while(kol1==0);
	

	//ROBIE CUDA WIADNKI ZEBY STWORZYC DYNAMICZNA MACIERZ DWUWYMIAROWA
	int **macierza = new int *[wier1]; //tablica wskaŸników <-- pe³ne szaleñstwo
	for ( int i=0; i<wier1;i++)
	macierza[i] = new int [kol1]; //alokacja pamieci

	//WPISYWANIE WARTOSCI W MACIERZ A! WIERSZAMI!!!
	printf("\n Wprowadz dane w macierz dla:\n");
	int k1,j1; //deklaruje wczesniej zeby nie bylo lokalnie
	for (k1=0; k1<wier1;k1++) 
	{
	printf("\n-->WIERSZ NR [%d]<--\n-----------------\n",k1+1);
		for(j1=0 ;j1<kol1;j1++)
		{
			printf("  KOLUMNA NR [%d] ",j1+1);
			cin>>macierza[k1][j1];}}

	//=============================================================
	// rozmiar MACIERZ B musi byc identyczny wiec pomijam ten krok
	//=============================================================


	//ROBIE CUDA WIADNKI ZEBY STWORZYC DYNAMICZNA MACIERZ DWUWYMIAROWA
	int **macierzb = new int *[wier1]; //tablica wskaŸników <-- pe³ne szaleñstwo
	for ( int i=0; i<wier1;i++)
	macierzb[i] = new int [kol1]; //alokacja pamieci

	//WPISYWANIE WARTOSCI W MACIERZ B z macierzy A
	for ( int k=0; k<wier1;k++) 
	{for(int j=0 ;j<kol1;j++)			
	macierzb[k][j]=macierza[k][j];}

	//WYPIS MACIERZY A i B
	cout<<endl;
	for ( int k=0; k<wier1;k++){
	cout<<endl;
	for(int j=0; j<kol1; j++)
	printf("[%d]",macierza[k][j]);}
	cout<<" <--- Macierz A ";
	cout<<endl;
	for ( int k=0; k<wier1;k++){
	cout<<endl;
	for(int j=0; j<kol1; j++)
	printf("[%d]",macierzb[k][j]);}
	cout<<" <--- Macierz B ";


delete[] macierza;
delete[] macierzb;	//zwalniam pamiec

						system("PAUSE");
						system("CLS");
						main();
}