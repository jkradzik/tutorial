#include "glowa.h"

void VIII(void){

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
	int **macierza = new int *[wier1]; //tablica wska�nik�w <-- pe�ne szale�stwo
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
		

	// incjalizuje kolumny i wiersze MACIERZY B
    int wier2; //i wiersz
	wier2=kol1; //od razu przepisuje wartosc zgodnie z warunkiem
    int kol2; //j kolumna
	printf("\nPodaj l kolumn macierzy B (l wierszy zostanie przepisana)\n wipsz 0 by wyjsc ");
	cin>>kol2;
	if(kol2==0)
		main();

	//ROBIE CUDA WIADNKI ZEBY STWORZYC DYNAMICZNA MACIERZ DWUWYMIAROWA
	int **macierzb = new int *[wier2]; //tablica wska�nik�w <-- pe�ne szale�stwo
	for ( int i=0; i<wier2;i++)
	macierzb[i] = new int [kol2]; //alokacja pamieci

	//WPISYWANIE WARTOSCI W MACIERZ B! WIERSZAMI!!!
	printf("\n Wprowadz dane w macierz B dla:\n");
	int k2,j2; //deklaruje wczesniej zeby nie bylo lokalnie
	for (k2=0; k2<wier2;k2++) 
	{
	printf("\n-->WIERSZ NR [%d]<--\n-----------------\n",k2+1);
		for(j2=0 ;j2<kol2;j2++)
		{
			printf("  KOLUMNA NR [%d] ",j2+1);
			cin>>macierzb[k2][j2];}}
	
	/* ==================MACIERZ C=========================*/
	int wier3, kol3;
	wier3=wier1;
	kol3=kol2;
	//ROBIE CUDA WIADNKI ZEBY STWORZYC DYNAMICZNA MACIERZ DWUWYMIAROWA
	int **macierzc = new int *[wier3]; //tablica wska�nik�w <-- pe�ne szale�stwo
	for ( int i=0; i<wier3;i++)
	macierzc[i] = new int [kol3]; //alokacja pamieci	
	
	/* ================iloczyn A I B==========PE�NE SZALE�STWO xD=====*/
	int kI,kII,kIII,wI,wII,wIII,sumail=0;
		for(wI=0;wI<wier1;wI++)
		{
		for(kII=0;kII<kol2;kII++)
			{
			for(kI=0;kI<kol1;kI++)
				{
				sumail+=macierza[wI][kI] * macierzb[kI][kII];
				}	
			macierzc[wI][kII]=sumail;
			sumail=0;
			}
		}
	
	
	//WYPIS MACIERZY A B i C
	cout<<endl;
	for ( int k=0; k<wier1;k++){
	cout<<endl;
	for(int j=0; j<kol1; j++)
	printf("[%d]",macierza[k][j]);}
	cout<<" <--- Macierz A ";
	printf("\n\n>->-> X <-<-<\n");
	for ( int k=0; k<wier2;k++){
	cout<<endl;
	for(int j=0; j<kol2; j++)
	printf("[%d]",macierzb[k][j]);}
	cout<<" <--- Macierz B ";
	printf("\n\n>->-> = <-<-<\n");
	for ( int k=0; k<wier3;k++){
	cout<<endl;
	for(int j=0; j<kol3; j++)
	printf("[%d]",macierzc[k][j]);}
	cout<<" <--- Macierz C ";


delete[] macierza;
delete[] macierzb;	//zwalniam pamiec
delete[] macierzc;

						system("PAUSE");
						system("CLS");
						main();
}