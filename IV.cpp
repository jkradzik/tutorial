#include"glowa.h"
void IV(){

    /*==================deklaruje wektor X=====================*/
    int N;
    
    printf("Ilu elementowy jest wektor X? ");
    cin>>N;
    int *wektorx=new int[N];
    if (N==0)
        {
        printf(" 0? plz... \n");
        
        }
    else{
        printf("Wprowadü wektor X: ");
        for (int i=0; i<N; i++)
            {
            cin>>wektorx[i];
            }}

    /*=============obliczam wartosc wektora X==================*/
    double wartoscx=0;
    for (int i=0; i<N; i++)
                {
                wartoscx+=(wektorx[i]^2);
                }
                wartoscx=sqrt(wartoscx);

    /*==================deklaruje wektor Y=====================*/
    int M;
    
    printf("\nIlu elementowy jest wektor Y? ");
   cin>>M;
    int *wektory=new int[M];
    if (M==0)
        {
        printf(" 0? plz... \n");
        
        }
    else{
        printf("Wprowadü wektor Y: ");
        for (int i=0; i<M; i++)
            {
            cin>>wektory[i];
            }}

     /*=============obliczam wartosc wektora Y==================*/
    double wartoscy=0;
    for (int i=0; i<M; i++)
                {
                wartoscy+=(wektory[i]^2);
                }
                wartoscy=sqrt(wartoscy);

    /*=====================suma wartosci X i Y========================*/
    double suma;
    suma=wartoscx+wartoscy;
    printf("\n\n %g   <--- wartosc wektora X",wartoscx);
    printf("\n+%g   <--- wartosc wektora Y",wartoscy);
    printf("\n=%g   <---        a=X+Y     ",suma);

	delete [] wektorx;
	delete [] wektory;	//zwalniam pamiec

						system("PAUSE");
						system("CLS");
						main();

}
