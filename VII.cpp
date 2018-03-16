#include "glowa.h"

void VII(void){

	/* ==================MACIERZ A=========================*/

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
	printf("\n Wprowadz dane w macierz A dla:\n");
	int k1,j1; //deklaruje wczesniej zeby nie bylo lokalnie
	for (k1=0; k1<wier1;k1++) 
	{
	printf("\n-->WIERSZ NR [%d]<--\n-----------------\n",k1+1);
		for(j1=0 ;j1<kol1;j1++)
		{
			printf("  KOLUMNA NR [%d] ",j1+1);
			cin>>macierza[k1][j1];}}

	/* ==================stala a =========================*/
	double a;
	printf("\n Przez co przemnozyc Macierz A? ");
	cin>>a;
	
	/* ==================MACIERZ C=========================*/
		
	//=============================================================
	// rozmiar MACIERZ C musi byc identyczny wiec pomijam ten krok
	//=============================================================

	//ROBIE CUDA WIADNKI ZEBY STWORZYC DYNAMICZNA MACIERZ DWUWYMIAROWA
	int **macierzc = new int *[wier1]; //tablica wskaŸników <-- pe³ne szaleñstwo
	for ( int i=0; i<wier1;i++)
	macierzc[i] = new int [kol1]; //alokacja pamieci	
	
	/* ============mnoze MACIERZ A przez stala a=================*/

	for ( int k=0; k<wier1;k++) 
	{for(int j=0 ;j<kol1;j++)			
	macierzc[k][j]=a*(macierza[k][j]);}

	//WYPIS MACIERZY A B i C
	cout<<endl;
	for ( int k=0; k<wier1;k++){
	cout<<endl;
	for(int j=0; j<kol1; j++)
	printf("[%d]",macierza[k][j]);}
	cout<<" <--- Macierz A ";
	printf("\n\n>->-> A x %d = <-<-<\n",a);
	for ( int k=0; k<wier1;k++){
	cout<<endl;
	for(int j=0; j<kol1; j++)
	printf("[%d]",macierzc[k][j]);}
	cout<<" <--- Macierz C ";


delete[] macierza;	//zwalniam pamiec
delete[] macierzc;

						system("PAUSE");
						system("CLS");
						main();
}