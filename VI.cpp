#include "glowa.h"

void VI(void){

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

	/* ==================MACIERZ B=========================*/
		
	//=============================================================
	// rozmiar MACIERZ B musi byc identyczny wiec pomijam ten krok
	//=============================================================

	//ROBIE CUDA WIADNKI ZEBY STWORZYC DYNAMICZNA MACIERZ DWUWYMIAROWA
	int **macierzb = new int *[wier1]; //tablica wskaŸników <-- pe³ne szaleñstwo
	for ( int i=0; i<wier1;i++)
	macierzb[i] = new int [kol1]; //alokacja pamieci

	//WPISYWANIE WARTOSCI W MACIERZ B! WIERSZAMI!!!
	printf("\n Wprowadz dane w macierz B dla:\n");
	int k2,j2; //deklaruje wczesniej zeby nie bylo lokalnie
	for (k2=0; k2<wier1;k2++) 
	{
	printf("\n-->WIERSZ NR [%d]<--\n-----------------\n",k2+1);
		for(j2=0 ;j2<kol1;j2++)
		{
			printf("  KOLUMNA NR [%d] ",j2+1);
			cin>>macierzb[k2][j2];}}
	
	/* ==================MACIERZ C=========================*/
		
	//=============================================================
	// rozmiar MACIERZ C musi byc identyczny wiec pomijam ten krok
	//=============================================================

	//ROBIE CUDA WIADNKI ZEBY STWORZYC DYNAMICZNA MACIERZ DWUWYMIAROWA
	int **macierzc = new int *[wier1]; //tablica wskaŸników <-- pe³ne szaleñstwo
	for ( int i=0; i<wier1;i++)
	macierzc[i] = new int [kol1]; //alokacja pamieci	
	
	/* ================SUMOWANIE A I B=====================*/

	for ( int k=0; k<wier1;k++) 
	{for(int j=0 ;j<kol1;j++)			
	macierzc[k][j]=macierza[k][j]+macierzb[k][j];}

	//WYPIS MACIERZY A B i C
	cout<<endl;
	for ( int k=0; k<wier1;k++){
	cout<<endl;
	for(int j=0; j<kol1; j++)
	printf("[%d]",macierza[k][j]);}
	cout<<" <--- Macierz A ";
	printf("\n\n>->-> + <-<-<\n");
	for ( int k=0; k<wier1;k++){
	cout<<endl;
	for(int j=0; j<kol1; j++)
	printf("[%d]",macierzb[k][j]);}
	cout<<" <--- Macierz B ";
	printf("\n\n>->-> = <-<-<\n");
	for ( int k=0; k<wier1;k++){
	cout<<endl;
	for(int j=0; j<kol1; j++)
	printf("[%d]",macierzc[k][j]);}
	cout<<" <--- Macierz C ";


delete[] macierza;
delete[] macierzb;	//zwalniam pamiec
delete[] macierzc;

						system("PAUSE");
						system("CLS");
						main();
}